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

vector <string> SplitString(string &Word, string Delim)
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

void PrintCleintsData(vector <stClientData> ClientsData)
{
    cout << "\t\t\t\tCleint list (" << ClientsData.size() << ") Cleint(s).\n";
    
    cout << "___________________________________________________________________________________\n\n";

    cout << "| Accont Number | Pin Code | Clint Name                      | Phone     | Balance  \n";

    cout << "___________________________________________________________________________________\n";

    for(stClientData &Cleint: ClientsData)
    {
        cout << "| " << Cleint.AccountNumber << setw(15 - Cleint.AccountNumber.length()) << "|" << 
        " " << Cleint.PinCode << setw(10 - Cleint.PinCode.length()) << "|" <<
        " " << Cleint.Name << setw(33 - Cleint.Name.length()) << "|" <<
        " " << Cleint.Phone << setw(11 - Cleint.Phone.length()) << "|" <<
        " " << Cleint.AccountBalance << endl;
    }
    
    cout << "___________________________________________________________________________________\n";

}

void ShowCleintData()
{
    fstream MyFile;
    vector <stClientData> ClientsData;
    string Line;
    int counter = 0;


    MyFile.open("Cleint.txt", ios::in);
    while (getline(MyFile, Line))
    {
        ClientsData.push_back(ConvertLineDataToRecord(Line));
    }
    MyFile.clear();
    
    PrintCleintsData(ClientsData);
}

int main()
{
    ShowCleintData();
    
}