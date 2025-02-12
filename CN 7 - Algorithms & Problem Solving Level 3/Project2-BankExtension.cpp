#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

string FileName = "Cleint.txt";

enum enOptions{eShowCleintList = 1, eAddNewCleint, eDeleteCleint, eUpdateCleintInfo, eFindCleint, eTransaction, eManageUsar};

enum enTransaction{eDeposit = 1, eWithdraw, eTotalBalances, etMainMeneu};

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

stClientData ConvertLineDataToRecord(string LineData, string Seperator = "#//#");

vector <string> SplitString(string Word, string Delim);

void PrintCleintsData(vector <stClientData> vClientsData);

string ConvertRecordClientsDataToLine(stClientData ClientData, string Seperator = "#//#");

void ShowEndScreen()
{
    system("cls");
    cout << "---------------------------------\n";
    cout << "\tProgram Ends :-)\n";
    cout << "---------------------------------\n";
    system("pause>0"); 

}

void ShowTransactionScreen()
{
    system("cls");
    cout << "==============================================================\n";
    cout << "\t\t   Transaction Meneu Screen\n";
    cout << "==============================================================\n";
    cout << "\t  [1]Deposit.\n";
    cout << "\t  [2]Withdraw.\n";
    cout << "\t  [3]Total Balances.\n";
    cout << "\t  [4]Main Meneu.\n";
    cout << "==============================================================\n";

}

void ShowCleintData()
{
    fstream MyFile;
    vector <stClientData> vClientsData;
    string Line;
    int counter = 0;


    MyFile.open("Cleint.txt", ios::in);
    while (getline(MyFile, Line))
    {
        vClientsData.push_back(ConvertLineDataToRecord(Line));
    }
    MyFile.clear();
    
    PrintCleintsData(vClientsData);
}

void ShowMainScreen()
{
    system("cls");
    cout << "=====================================================\n";
    cout << "\t\t   Main Meneu Screen\n";
    cout << "=====================================================\n";
    cout << "\t  [1]Show Cleint list.\n";
    cout << "\t  [2]Add New Cleint.\n";
    cout << "\t  [3]Delete Cleint.\n";
    cout << "\t  [4]Update Cleint Info.\n";
    cout << "\t  [5]Find Cleint.\n";
    cout << "\t  [6]Transaction.\n";
    cout << "\t  [7]Exit.\n";
    cout << "=====================================================\n";

}

double ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message;
        cin >> number;
    } while (number < 0);
        
    return number;
}

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

    MyFile.open(FileName, ios::in);
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

stClientData GetCleintData(vector <stClientData> &vClientsData, string AccountNumber)
{
    stClientData x;
    for(stClientData &Cleint: vClientsData)
    {
        if (Cleint.AccountNumber == AccountNumber)
        {
            Cleint.UpDateMark = true;
            return Cleint;
        }
    }
    return x;
}

void PrintCleintCard(stClientData ClientData)
{
    cout << "\nThe Following are the cleint details: \n";

    cout << "--------------------------------------------";
    cout << "\nAccount Number  : " << ClientData.AccountNumber << endl;
    cout << "Pin code        : " << ClientData.PinCode << endl;
    cout << "Name            : " << ClientData.Name << endl;
    cout << "Phone           : " << ClientData.Phone << endl;
    cout << "Account Balance : " << ClientData.AccountBalance << endl;
    cout << "--------------------------------------------\n";


}

void AddClientsDataToFile(stClientData vClientsData)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out | ios::app);

    MyFile << ConvertRecordClientsDataToLine(vClientsData) << endl;
    MyFile.close();

}

void SaveClientsDataToFile(vector <stClientData> vClientsData)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    for(stClientData C: vClientsData)
    {
        MyFile << ConvertRecordClientsDataToLine(C) << endl;
    }
    MyFile.close();

}

void PrintCleintsData(vector <stClientData> vClientsData)
{
    system("cls");
    cout << "\t\t\t\tCleint list (" << vClientsData.size() << ") Cleint(s).\n";
    
    cout << "___________________________________________________________________________________\n\n";

    cout << "| Accont Number | Pin Code | Clint Name                      | Phone     | Balance  \n";

    cout << "___________________________________________________________________________________\n";

    for(stClientData &Cleint: vClientsData)
    {
        cout << "| " << Cleint.AccountNumber << setw(15 - Cleint.AccountNumber.length()) << "|" << 
        " " << Cleint.PinCode << setw(10 - Cleint.PinCode.length()) << "|" <<
        " " << Cleint.Name << setw(33 - Cleint.Name.length()) << "|" <<
        " " << Cleint.Phone << setw(11 - Cleint.Phone.length()) << "|" <<
        " " << Cleint.AccountBalance << endl;
    }
    
    cout << "___________________________________________________________________________________\n";

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 


}

bool IsAccountNumberExist(vector <stClientData> vClientsData, string AccountNumber)
{
    for(stClientData &C: vClientsData)
    {
        if (AccountNumber == C.AccountNumber)
        {
            return 1;
        }
    } 
    return 0;
}

void AddNewCleint()
{
    system("cls");
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();
    
    cout << "---------------------------------------------\n";
    cout << "\t  Add New Cleint Screen\n";
    cout << "---------------------------------------------\n";
    cout << "Add New Cleint\n";


    cout << "\nEnter Number Account? ";
    getline(cin >> ws, ClientData.AccountNumber);

    while (IsAccountNumberExist(vClientsData, ClientData.AccountNumber))
    {
        cout << "\nCleint with [" << ClientData.AccountNumber << "] Already exists, Enter Number Account? ";
        cin >> ClientData.AccountNumber;
    }

    cout << "\nEnter Pin Code? ";
    getline(cin, ClientData.PinCode);

    cout << "\nEnter Name? ";
    getline(cin >> ws, ClientData.Name);

    cout << "\nEnter Phone? ";
    getline(cin >> ws, ClientData.Phone);
    
    cout << "\nEnter Account Balance? ";
    cin >> ClientData.AccountBalance;

    AddClientsDataToFile(ClientData);   



    char Answr = 'n';
    cout << "\nCleint Added Successfully, Do you want to Add more Cleint? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
        AddNewCleint();

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 

    
}

void DeleteCleint()
{
    system("cls");
    char Answr = 'n';

    string AccountNumber;
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();
    
    cout << "---------------------------------------------\n";
    cout << "\t  Delete Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    cout << "\nEnter Number AccountNumber? ";
    getline(cin >> ws, AccountNumber);



    if ((IsAccountNumberExist(vClientsData, AccountNumber)))
    {
        cout << "\n\nThe following are the cleint details:\n";
        ClientData = GetCleintData(vClientsData, AccountNumber);
        PrintCleintCard(ClientData);

        cout << "\nAre you sure you want to delete this cleint? Y/N ?";
        cin >> Answr;

        if (toupper(Answr) == 'Y')
        {
            fstream MyFile;
            MyFile.open(FileName, ios::out);

            for(stClientData &C: vClientsData)
            {
                if (!(C.AccountNumber == ClientData.AccountNumber))
                {
                    MyFile << ConvertRecordClientsDataToLine(C) << endl;
                }
            }
        }
    }
    else
    {
        cout << "\nCleint with Account Number (" << AccountNumber << ") is not found";
        system("pause>0");        
    }

    cout << "\n\nCleint Deleted Successfolly.";

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0");     
}

void UpdateCleintInfo()
{
    system("cls");

    char Answr = 'n';
    string AccountNumber;
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    cout << "---------------------------------------------\n";
    cout << "\t  Update Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    cout << "\nEnter Number AccountNumber? ";
    getline(cin >> ws, AccountNumber);


    if (IsAccountNumberExist(vClientsData, AccountNumber))
    {
        ClientData = GetCleintData(vClientsData, AccountNumber);
        PrintCleintCard(ClientData);

        cout << "\nAre you sure you want update this cleint Y/N ?";
        cin >> Answr;
        if (toupper(Answr) == 'Y')
        {
            for(stClientData &C: vClientsData)
            {
                if (C.AccountNumber == AccountNumber)
                {
                    C = ChangaClientInfo(ClientData);
                    break;
                }
            }
            SaveClientsDataToFile(vClientsData);      

            cout << "\n\nCleint updated Successfolly\n";
            cout << "\n\nPress any Key to go back to Main Menue...";
            system("pause>0");
        }
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n";
        system("pause>0");
    
    }
    
}

void FindCleint()
{
    system("cls");

    char Answr = 'n';
    string AccountNumber;
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    cout << "---------------------------------------------\n";
    cout << "\t  Update Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    cout << "\n\nEnter Number AccountNumber? \n";
    getline(cin >> ws, AccountNumber);


    if (IsAccountNumberExist(vClientsData, AccountNumber))
    {
        ClientData = GetCleintData(vClientsData, AccountNumber);
        cout << "--------------------------------------------\n";
        PrintCleintCard(ClientData);

        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0"); 
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n"; 
    }
}

void Deposit()
{
    system("cls");

    char Answr = 'n';
    string AccountNumber;
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    cout << "---------------------------------------------\n";
    cout << "\t  Deposit Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    cout << "\nEnter Number AccountNumber? ";
    getline(cin >> ws, AccountNumber);

    while (!(IsAccountNumberExist(vClientsData, AccountNumber)))
    {
        cout << "\nClint with [" << AccountNumber << "] dose not exist\n"; 
        cout << "\nEnter Number AccountNumber? \n";
        getline(cin >> ws, AccountNumber);
    }

    ClientData = GetCleintData(vClientsData, AccountNumber);
    PrintCleintCard(ClientData);

    double Amount;
    Amount = ReadPositiveNumber("\nPlease enter depoist amount? ");

    cout << "\nare you sure you want performa this transaction? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
    {
        for(stClientData &C: vClientsData)
        {
            if (C.AccountNumber == AccountNumber)
            {
                C.AccountBalance += Amount;
                SaveClientsDataToFile(vClientsData);
                cout << "\n\nDoun saccessfully, New balance is : " << ClientData.AccountBalance + Amount;   
                break;
            }
        }

        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0");      
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n";
        system("pause>0");
    }
    

}

void Withdraw()
{
    system("cls");

    char Answr = 'n';
    double Amount;
    string AccountNumber;
    stClientData ClientData;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    cout << "---------------------------------------------\n";
    cout << "\t  Withdraw Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    cout << "\nEnter Number AccountNumber? ";
    getline(cin >> ws, AccountNumber);

    while (!(IsAccountNumberExist(vClientsData, AccountNumber)))
    {
        cout << "\nClint with [" << AccountNumber << "] dose not exist\n"; 
        cout << "\nEnter Number AccountNumber? \n";
        getline(cin >> ws, AccountNumber);
    }

    ClientData = GetCleintData(vClientsData, AccountNumber);
    PrintCleintCard(ClientData);

    Amount = ReadPositiveNumber("\nPlease enter Withdraw amount? ");

    while (Amount > ClientData.AccountBalance)
    {
        cout << "\nAmount Exceeds the balance, you can withdraw up to : " << ClientData.AccountNumber;
        Amount = ReadPositiveNumber("\nPlease enter Withdraw amount? ");

    }
    
    
    cout << "\nare you sure you want performa this transaction? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
    {
        for(stClientData &C: vClientsData)
        {
            if (C.AccountNumber == AccountNumber)
            {
                C.AccountBalance = ClientData.AccountBalance + ( -1 * Amount);
                 break;
            }
        }
        SaveClientsDataToFile(vClientsData);

        cout << "\n\nDoun saccessfully, New balance is : " << ClientData.AccountBalance + ( -1 * Amount);   
        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0");      
    }
    else
    {
        cout << "\nCleint with account number(" << AccountNumber << ") Not found!\n\n\n";
        system("pause>0");
    }
    

}

void PrintCleintsBalance(vector <stClientData> vClientsData)
{
    int Sum = 0;
    system("cls");
    cout << "\t\tBalances list (" << vClientsData.size() << ") Cleint(s).\n";
    
    cout << "____________________________________________________________________\n\n";

    cout << "| Accont Number | Clint Name                      | Balance  \n";

    cout << "____________________________________________________________________\n";

    for(stClientData &Cleint: vClientsData)
    {
        cout << "| " << Cleint.AccountNumber << setw(15 - Cleint.AccountNumber.length()) << "|" << 
        " " << Cleint.Name << setw(33 - Cleint.Name.length()) << "|" <<
        " " << Cleint.AccountBalance << endl;
        Sum += Cleint.AccountBalance;
    }
    cout << "____________________________________________________________________\n";
    cout << "\t\tTotal Balances : " << Sum;

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 


}

void TotalBalances()
{
    fstream MyFile;
    vector <stClientData> vClientsData;
    string Line;
    int counter = 0;


    MyFile.open("Cleint.txt", ios::in);
    while (getline(MyFile, Line))
    {
        vClientsData.push_back(ConvertLineDataToRecord(Line));
    }
    MyFile.clear();
    
    PrintCleintsBalance(vClientsData);

}

void DoTransaction(int NumberOfChoice)
{
    switch ((enOptions)NumberOfChoice)
    {
    case enTransaction::eDeposit :
        Deposit();
        break;

    case enTransaction::eWithdraw :
        Withdraw();
        break;

    case enTransaction::eTotalBalances :
        TotalBalances();
        break;

    case enTransaction::etMainMeneu :
        
        break;

    default:
        break;
    }
}

void DoOptions(int NumberOfChoice)
{
    switch ((enOptions)NumberOfChoice)
    {
    case enOptions::eShowCleintList :
        ShowCleintData();
        break;
    
    case enOptions::eAddNewCleint :
        AddNewCleint();
        break;   

    case enOptions::eDeleteCleint :
        DeleteCleint();
        break;

    case enOptions::eUpdateCleintInfo :
        UpdateCleintInfo();
        break;

    case enOptions::eFindCleint :
        FindCleint();
        break; 
    
    case enOptions::eTransaction :
        do
        {
            ShowTransactionScreen();
            NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 4]? ");
            DoTransaction(NumberOfChoice);
        } while (NumberOfChoice != 4);
        break;

    case enOptions::eManageUsar :
        ShowEndScreen();
        break;

    default:
        break;
    }
}

int main()
{
    int NumberOfChoice;

    do
    {
    ShowMainScreen();
    NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 7]? ");
    DoOptions(NumberOfChoice);

    } while (NumberOfChoice != 7);
    
}