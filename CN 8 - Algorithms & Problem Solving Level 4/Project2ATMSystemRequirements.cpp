#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

string CleintFile = "Cleints.txt";

void Login();

enum enTransaction{eQuickWithdraw = 1, eNormalWithdraw, eDeposit, eSheckBalances, eLogout};

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

enum enPermtissions
{
    ShowCleintList = 1,
    AddClient = 2,
    DeleteClient = 4,
    UpdateClient = 8,
    FindCleints = 16,
    Transaction = 32,
    ManageUsar = 64,
};

struct stUserData
{
    string Name;
    string Password;
    int NumberPermissions ;
    bool DeleteMark = false;

};

stClientData CurrentUser;

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

stClientData ConvertLineDataToRecordClint(string LineData, string Seperator = "#//#")
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
        ClientData.push_back(ConvertLineDataToRecordClint(line));
    }
    return ClientData;
}

string ConvertRecordClientsDataToLine(stClientData ClientData, string Seperator = "#//#")
{
    string ClinteRecord = "";

    ClinteRecord += ClientData.AccountNumber + Seperator;
    ClinteRecord += ClientData.PinCode + Seperator;
    ClinteRecord += ClientData.Name + Seperator;
    ClinteRecord += ClientData.Phone + Seperator;
    ClinteRecord += to_string(ClientData.AccountBalance);

    return ClinteRecord;

}

void SaveClientsDataToFile(vector <stClientData> vClientsData)
{
    fstream MyFile;
    MyFile.open(CleintFile, ios::out);

    for(stClientData C: vClientsData)
    {
        MyFile << ConvertRecordClientsDataToLine(C) << endl;
    }
    MyFile.close();

}

void ShowLoginScreen()
{
    system("cls");
    cout << "---------------------------------\n";
    cout << "\tLogin Screen :-)\n";
    cout << "---------------------------------\n";

}

void ShowTransactionScreen()
{
    system("cls");
    cout << "==============================================================\n";
    cout << "\t\t   ATM Main Meneu Screen\n";
    cout << "==============================================================\n";
    cout << "\t  [1]Quick Withdraw.\n";
    cout << "\t  [2]Normal Withdraw.\n";
    cout << "\t  [3]Deposit.\n";
    cout << "\t  [4]Sheck Balances.\n";
    cout << "\t  [5]Logout.\n";
    cout << "==============================================================\n";

}

void ShowQuickWithdrawMeneu()
{
    system("cls");
    cout << "==============================================================\n";
    cout << "\t\t   Quick Withdraw\n";
    cout << "==============================================================\n";
    cout << "\t  [1] 10\t [2] 50\n";
    cout << "\t  [3] 100\t [4] 200\n";
    cout << "\t  [5] 400\t [6] 600\n";
    cout << "\t  [7] 800\t [8] 1000\n";
    cout << "\t  [9] Exit\n";
    cout << "==============================================================\n";

}

bool IsAccountExist(vector <stClientData> vClientsData, stClientData ClientData)
{
    for(stClientData &C: vClientsData)
    {
        if (ClientData.AccountNumber == C.AccountNumber && ClientData.PinCode == C.PinCode)
        {
            CurrentUser = C;
            return 1;
        }
    } 
    return 0;
}

int WithdrawValalue(int NumberOfChoice)
{

    switch (NumberOfChoice)
    {
    case 1:
        return 10;
        break;
    
    case 2:
        return 50;
        
        break;
    
    case 3:
        return 100;
        break;
    
    case 4:
        return 200;
        break;
    
    case 5:
        return 400;
        break;
    
    case 6:
        return 600;
        break;
    
    case 7:
        return 800;
        break;
    
    case 8:
        return 1000;
        break;
    
    default:
        return 0;
        break;
    }

}

void QuickWithdraw()
{
    int NumberOfChoice;
    char Answr = 'n';
    double Amount;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    do
    {
        cout << "Your Balance is " << CurrentUser.AccountBalance << endl;
        NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 9]? ");
        Amount = WithdrawValalue(NumberOfChoice);

        if (Amount == 0)
        {
            break;;
        }
        
        if(Amount > CurrentUser.AccountBalance)
        {
            cout << "\nAmount Exceeds the balance, Make another cthoic.";
            cout << "\n\nPress any Key to go back to Main Menue...";
            system("pause>0");

            continue;
        }


        cout << "\nare you sure you want performa this transaction? Y/N? ";
        cin >> Answr;

        if (toupper(Answr) == 'Y')
        {

            for(stClientData &C: vClientsData)
            {
                if (C.AccountNumber == CurrentUser.AccountNumber)
                {
                    CurrentUser.AccountBalance += ( -1 * Amount);
                    C.AccountBalance += ( -1 * Amount);
                    break;
                }
            }
            
            SaveClientsDataToFile(vClientsData);

            cout << "\n\nDoun saccessfully, New balance is : " << CurrentUser.AccountBalance;   
            cout << "\n\nPress any Key to go back to Main Menue...";
            system("pause>0");

            break;  
        }


    } while (true);
    


}

void ShowWithdraw()
{
    cout << "---------------------------------------------\n";
    cout << "\t  Withdraw Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
}

void NormalWithdraw()
{

    char Answr = 'n';
    int Amount;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    ShowWithdraw();

    do
    {
        Amount = ReadPositiveNumber("\nEnter an amount multiple 5's ? ");

    } while (Amount % 5 != 0);

    if(Amount > CurrentUser.AccountBalance)
    {
        cout << "\nAmount Exceeds the balance, Make another cthoic.";
        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0");

    }


    cout << "\nare you sure you want performa this transaction? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
    {
        for(stClientData &C: vClientsData)
        {
            if (C.AccountNumber == CurrentUser.AccountNumber)
            {
                C.AccountBalance = CurrentUser.AccountBalance + ( -1 * Amount);
                CurrentUser.AccountBalance = C.AccountBalance;
                break;
            }
        }

        
        SaveClientsDataToFile(vClientsData);

        cout << "\n\nDoun saccessfully, New balance is : " << CurrentUser.AccountBalance;   
        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0");      
    }

        
}

void ShowDeposit()
{
    cout << "---------------------------------------------\n";
    cout << "\t  Deposit Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
}

void Deposit()
{
    system("cls");

    char Answr = 'n';
    int Amount;
    vector <stClientData> vClientsData = LoadCleintDataFromFile();

    ShowDeposit();
    Amount = ReadPositiveNumber("\nPlease enter depoist amount? ");

    cout << "\nare you sure you want performa this transaction? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
    {
        for(stClientData &C: vClientsData)
        {
            if (C.AccountNumber == CurrentUser.AccountNumber)
            {
                C.AccountBalance += Amount;
                CurrentUser.AccountBalance = C.AccountBalance;  
                break;
            }
        }


        SaveClientsDataToFile(vClientsData);
        cout << "\n\nDoun saccessfully, New balance is : " << CurrentUser.AccountBalance; 

        cout << "\n\nPress any Key to go back to Main Menue...";
        system("pause>0");      
    }
    

}

void ShowCheckBalances()
{
    cout << "=============================================\n";
    cout << "\t     Check Balances Screen\n";
    cout << "=============================================\n";


}

void CheckBalances()
{

    system("cls");
    ShowCheckBalances();
    cout << "Your Balance is " << CurrentUser.AccountBalance << endl;

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 
}

void DoTransaction(int NumberOfChoice)
{
    ShowTransactionScreen();
    
    switch (NumberOfChoice)
    {
    case enTransaction::eQuickWithdraw :

        system("cls");
        ShowQuickWithdrawMeneu();
        QuickWithdraw();
        break;

    case enTransaction::eNormalWithdraw :
        ShowWithdraw();
        system("cls");
        NormalWithdraw();
        break;

    case enTransaction::eDeposit :
        ShowDeposit();
        system("cls");
        Deposit();
        break;

    case enTransaction::eSheckBalances :
        ShowCheckBalances();
        system("cls");
        CheckBalances();
        break;

    case enTransaction::eLogout :

        system("cls");
        Login();
        break; 
    }
}

void GoToMainScreen()
{
    int NumberOfChoice;

    do
    {
    ShowTransactionScreen();
    NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 5]? ");
    DoTransaction(NumberOfChoice);

    } while (true);

}

void Login()
{
    bool LoginCase = 0;
    stClientData ClientData;
    vector <stClientData> vClient = LoadCleintDataFromFile();

    do
    {        
        system("cls");
        ShowLoginScreen();

        if (LoginCase)
        {
            cout << "Invlail Acountnumber/PinCode " << endl;
        }
    
        cout << "\nEnter Acountnumber? ";
        getline(cin >> ws, ClientData.AccountNumber);

        cout << "\nEnter PinCode? ";
        getline(cin >> ws, ClientData.PinCode);

        LoginCase = !IsAccountExist(vClient, ClientData);

    } while (LoginCase);
    
    GoToMainScreen();
}

int main()
{
    Login();
    
}