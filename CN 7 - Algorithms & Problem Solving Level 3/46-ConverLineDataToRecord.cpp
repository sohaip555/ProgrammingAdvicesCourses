#include<iostream>
#include <string>
#include <vector>
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

void PrintRecordClient(stClientData ClientData)
{
    cout << "\nAccount Number: " << ClientData.AccountNumber << endl;
    cout << "Pin Code      : " << ClientData.PinCode << endl;
    cout << "Name          : " << ClientData.Name << endl;
    cout << "Phone         : " << ClientData.Phone << endl;
    cout << "AccountBalance:" << ClientData.AccountBalance << endl;
}

int main()
{
    stClientData Record;
    string LineData = "A120#//#1234#//#Sohaip Abu-Ghrara#//#0914163016#//#5000";

    Record = ConvertLineDataToRecord(LineData, "#//#");
    PrintRecordClient(Record);

}