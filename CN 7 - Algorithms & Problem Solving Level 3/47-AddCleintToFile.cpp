#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct stClientData
{
    string Name;
    string Phone;
    string AccountNumber;
    string PinCode;
    int AccountBalance;

};

stClientData ReadClientInfo()
{
    stClientData ClientData;


    cout << "\nEnter Number Account? ";

    getline(cin >> ws, ClientData.AccountNumber);

    cout << "\nEnter Pin Code? ";
    getline(cin, ClientData.PinCode);

    cout << "\nEnter Name? ";
    getline(cin, ClientData.Name);

    cout << "\nEnter Phone? ";
    getline(cin, ClientData.Phone);
    
    cout << "\nEnter Account Balance? ";
    cin >> ClientData.AccountBalance;

    return ClientData;
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

void AddCleintsToFile()
{
    fstream MyFile;
    stClientData ClientData;
    char DoAgian = 'Y';

    do
    {
        MyFile.open("Cleint.txt", ios::out | ios::app);

        ClientData = ReadClientInfo();
        MyFile << ConvertRecordClientsDataToLine(ClientData) << endl;

        MyFile.close();

        cout  << "\ncleint added saccessfuliy, Do you want to Add more cleint\n";
        cin >> DoAgian;


    } while (tolower(DoAgian) == 'Y');
}

int main()
{

    AddCleintsToFile();
    
}