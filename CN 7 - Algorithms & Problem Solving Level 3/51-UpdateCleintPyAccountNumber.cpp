#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

string CleintFile = "Cleint.txt";

struct stClientData
{
    string Name;
    string AccountNumber;
    string PinCode;
    string Phone;
    int AccountBalance;
    bool DeleteMark = false;
    bool UpDateMark = false;
};

string ReadAccountNumber()
{
    string s;
    cout << "\n\nPlease enter account number to the client you looking for: ";
    cin >> s;
    return s;
}

vector <string> SplitString(string Word, string Delim)
{

    vector <string> Words;
    int counter = 0;
    int f;
    while ((f = Word.find(Delim)) != std::string::npos)
    {
        Words.push_back(Word.substr(0, f));
        counter ++;

        Word.erase(0, f + Delim.length());
    }
    
    if (Word != " ")
    {
        Words.push_back(Word.substr(0, f));
    }
    
    return Words;
}

string ConvertRecordClientsDataToLine(stClientData ClientData, string Seperator = "#//#")
{
    string ClinteRecord;

    ClinteRecord += ClientData.AccountNumber + Seperator;
    ClinteRecord += ClientData.PinCode + Seperator;
    ClinteRecord += ClientData.Name + Seperator;
    ClinteRecord += ClientData.Phone + Seperator;
    ClinteRecord += to_string(ClientData.AccountBalance);

    return ClinteRecord;

}

stClientData ConvertLineDataToRecord(string LineData, string Seperator = "#//#")
{
    stClientData Record;
    vector<string> vRecord = SplitString(LineData, Seperator) ;

    Record.AccountNumber = vRecord.at(0);
    Record.PinCode = vRecord.at(1);
    Record.Name = vRecord.at(2);
    Record.Phone = vRecord.at(3);
    Record.AccountBalance = stoi(vRecord.at(4));
    
    return Record;
}

vector <stClientData> LoadCleintDataFromFile()
{
    fstream MyFile;
    vector<stClientData> ClientData;
    string line;

    MyFile.open(CleintFile, ios::in);
    while (getline(MyFile, line))
    {
        ClientData.push_back(ConvertLineDataToRecord(line));
    }
    return ClientData;
}

stClientData ChangaClientInfo(stClientData ClientData)
{
    cout << "\nEnter Name? ";
    getline(cin >> ws, ClientData.Name);

    cout << "\nEnter Pin Code? ";
    getline(cin, ClientData.PinCode);

    cout << "\nEnter Phone? ";
    getline(cin, ClientData.Phone);
    
    cout << "\nEnter Account Balance? ";
    cin >> ClientData.AccountBalance;

    return ClientData;
}

bool FindCleintData(vector <stClientData> ClientData, string AccountNumber)
{
    for (stClientData &Cleint: ClientData)
    {
        if (Cleint.AccountNumber == AccountNumber)
        {
            return 1;
        }            
    }
    return 0;
}

stClientData GetCleintData(vector <stClientData> &ClientsData, string AccountNumber)
{
    stClientData x;
    for(stClientData &Cleint: ClientsData)
    {
        if (Cleint.AccountNumber == AccountNumber)
        {
            Cleint.UpDateMark = true;
            return Cleint;
        }
    }
    return x;
}

void PrintCleintData(stClientData ClientData)
{
    cout << "\nThe Following are the cleint details: \n";

    cout << "\nAccount Number  : " << ClientData.AccountNumber << endl;
    cout << "Pin code        : " << ClientData.PinCode << endl;
    cout << "Name            : " << ClientData.Name << endl;
    cout << "Phone           : " << ClientData.Phone << endl;
    cout << "Account Balance : " << ClientData.AccountBalance << endl;

}

void SaveClientsDataToFile(vector <stClientData> ClientsData)
{
    fstream MyFile;
    MyFile.open(CleintFile, ios::out);

    for(stClientData C: ClientsData)
    {
        MyFile << ConvertRecordClientsDataToLine(C) << endl;
    }
    MyFile.close();

}

void UpdataCleintPyAccountNumber(vector <stClientData> &ClientsData, string AccountNumber)
{
    char Answr = 'n';
    stClientData ClientData;
    if (FindCleintData(ClientsData, AccountNumber))
    {
        ClientData = GetCleintData(ClientsData, AccountNumber);
        PrintCleintData(ClientData);

        cout << "\nAre you sure you want update this cleint Y/N ?";
        cin >> Answr;
        if (toupper(Answr) == 'Y')
        {
            for(stClientData &C: ClientsData)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangaClientInfo(ClientData);
                    break;
                }
            }
            SaveClientsDataToFile(ClientsData);            
        }
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n";
    }
    
}

int main()
{
    string AccountNumber = ReadAccountNumber();
    vector <stClientData> ClientsData = LoadCleintDataFromFile();

    UpdataCleintPyAccountNumber(ClientsData, AccountNumber);

    
}