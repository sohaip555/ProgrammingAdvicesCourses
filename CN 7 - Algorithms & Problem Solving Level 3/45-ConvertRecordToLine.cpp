#include <iostream>
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
    getline(cin, ClientData.AccountNumber);

    cout << "\nEnter Name? ";
    getline(cin, ClientData.Name);

    cout << "\nEnter Pin Code? ";
    getline(cin, ClientData.PinCode);

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

int main()
{
    stClientData ClientData;

    ClientData = ReadClientInfo();
    cout << ConvertRecordClientsDataToLine(ClientData);

}