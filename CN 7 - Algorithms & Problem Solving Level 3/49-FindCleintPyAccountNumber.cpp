#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

struct stClientData
{
    string Name;
    string AccountNumber;
    string PinCode;
    string Phone;
    int AccountBalance;

};

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

stClientData GetCleintData(vector <stClientData> ClientData, string AccountNumber)
{
    stClientData x;
    for(stClientData &Cleint: ClientData)
    {
        if (Cleint.AccountNumber == AccountNumber)
        {
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

void ShowCleintData()
{
    fstream MyFile;
    vector <stClientData> ClientsData;
    stClientData ClientData;
    string Line;
    string AccountNumber;


    MyFile.open("Cleint.txt", ios::in);
    while (getline(MyFile, Line))
    {
        ClientsData.push_back(ConvertLineDataToRecord(Line));
    }
    MyFile.clear();

    cout << "\n\nPlease enter account number to the client you looking for: ";
    cin >> AccountNumber;

    ClientData = GetCleintData(ClientsData, AccountNumber);
    
    if (FindCleintData(ClientsData, AccountNumber))
    {
        PrintCleintData(ClientData);
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n";
    }
    


}

int main()
{
    ShowCleintData();
    
}