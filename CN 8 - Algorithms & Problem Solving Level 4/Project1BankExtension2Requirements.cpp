#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

string CleintFile = "Cleints.txt";

string UserFile = "User.txt";


enum enTransaction{eDeposit = 1, eWithdraw, eTotalBalances, etMainMeneu};

enum enManageUsar{eListUser = 1, eAddUser, eDeletUser, eUpdateUser, eFindUser, emMainMeneu};

enum enOptions{
    eShowCleintList = 1, 
    eAddNewCleint, 
    eDeleteCleint, 
    eUpdateCleintInfo, 
    eFindCleint, 
    eTransaction, 
    eManageUsar,
    eLogIn,
};

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

struct stPermtissions
{
    int ShowCleintList = 0;
    int AddClient = 0;
    int DeleteClient = 0;
    int UpdateClient = 0;
    int FindCleints = 0;
    int Transaction = 0;
    int ManageUsar = 0;
};

struct stUserData
{
    string Name;
    string Password;
    stPermtissions Permtissions;
    int NumberPermissions ;
    bool DeleteMark = false;

};

void PrintCleintsData(vector <stClientData> vClientsData);

void MangameUser(int NumberOfChoice);

void PrintUsersData(vector <stUserData> vUser);

void Login();

stUserData WhatThePermissions(stUserData UserData);

void ShowEndScreen()
{
    system("cls");
    cout << "---------------------------------\n";
    cout << "\tProgram Ends :-)\n";
    cout << "---------------------------------\n";
    system("pause>0"); 

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
    cout << "\t\t   Transaction Meneu Screen\n";
    cout << "==============================================================\n";
    cout << "\t  [1]Deposit.\n";
    cout << "\t  [2]Withdraw.\n";
    cout << "\t  [3]Total Balances.\n";
    cout << "\t  [4]Main Meneu.\n";
    cout << "==============================================================\n";

}

void ShowMainMeneuScreen()
{
    system("cls");
    cout << "==============================================================\n";
    cout << "\t\t   Manage User Meneu Screen\n";
    cout << "==============================================================\n";
    cout << "\t  [1]List User.\n";
    cout << "\t  [2]Add New User.\n";
    cout << "\t  [3]Delete User.\n";
    cout << "\t  [4]Update.\n";
    cout << "\t  [5]Find User.\n";
    cout << "\t  [6]Mine Menue.\n";
    cout << "==============================================================\n";

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

stUserData ConvertLineDataToRecordUser(string LineData, string Seperator = "#//#")
{
    stUserData UserData;
    vector<string> vUserData = SplitString(LineData, Seperator) ;

    UserData.Name = vUserData.at(0);
    UserData.Password = vUserData.at(1);
    UserData.NumberPermissions = stoi(vUserData.at(2));
 
    return UserData;
}

void ShowCleintData()
{
    fstream MyFile;
    vector <stClientData> vClientsData;
    string Line;
    int counter = 0;


    MyFile.open(CleintFile, ios::in);
    while (getline(MyFile, Line))
    {
        vClientsData.push_back(ConvertLineDataToRecordClint(Line));
    }
    MyFile.clear();
    
    PrintCleintsData(vClientsData);
}

void ShowUserData()
{
    fstream MyFile;
    vector <stUserData> vUser;
    string Line;
    int counter = 0;


    MyFile.open(UserFile, ios::in);
    while (getline(MyFile, Line))
    {
        vUser.push_back(ConvertLineDataToRecordUser(Line));
    }
    MyFile.clear();
    
    PrintUsersData(vUser);
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
    cout << "\t  [7]ManageUsar.\n";
    cout << "\t  [8]Logout.\n";
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

string ConvertRecordUsersDataToLine(stUserData UserData, string Seperator = "#//#")
{
    string User = "";
    
    User += UserData.Name + Seperator;
    User += UserData.Password + Seperator;
    User += to_string(UserData.NumberPermissions);
    return User;

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

vector <stUserData> LoadUserDataFromFile()
{
    fstream MyFile;
    vector<stUserData> UserData;
    string line;

    MyFile.open(UserFile, ios::in);
    while (getline(MyFile, line))
    {
        UserData.push_back(ConvertLineDataToRecordUser(line));
    }

    return UserData;
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

stUserData ChangaUserInfo(stUserData UserData)
{
    cout << "\nEnter Password? ";
    getline(cin >> ws, UserData.Password);

    UserData = WhatThePermissions(UserData);

    return UserData;
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

stUserData GetUserData(vector <stUserData> &vUserData, stUserData UserData)
{
    stUserData x;
    for(stUserData &User: vUserData)
    {
        if (User.Name == UserData.Name)
        {
            UserData.DeleteMark = true;
            return User;
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

void PrintUserCard(stUserData UserData)
{
    cout << "\nThe Following are the cleint details: \n";

    cout << "--------------------------------------------\n";
    cout << "Username  : " << UserData.Name << endl;
    cout << "Password  : " << UserData.Password << endl;
    cout << "Permission: " << UserData.NumberPermissions << endl;
    cout << "--------------------------------------------\n";

}

void AddClientsDataToFile(stClientData vClientsData)
{
    fstream MyFile;
    MyFile.open(CleintFile, ios::out | ios::app);

    MyFile << ConvertRecordClientsDataToLine(vClientsData) << endl;
    MyFile.close();

}

void AddUsersDataToFile(stUserData UserData)
{
    fstream MyFile;
    MyFile.open(UserFile, ios::out | ios::app);

    MyFile << ConvertRecordUsersDataToLine(UserData) << endl;
    MyFile.close();

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

void SaveUsersDataToFile(vector <stUserData> UserData)
{
    fstream MyFile;
    MyFile.open(UserFile, ios::out);

    for(stUserData &U: UserData)
    {
        MyFile << ConvertRecordUsersDataToLine(U) << endl;
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

void PrintUsersData(vector <stUserData> vUser)
{
    system("cls");
    cout << "\t\t\t\tUser list (" << vUser.size() << ") Cleint(s).\n";
    
    cout << "___________________________________________________________________________________\n\n";

    cout << "| User Name   | Password | Permtissions      \n";

    cout << "___________________________________________________________________________________\n\n";

    for(stUserData &User: vUser)
    {
        cout << "| " << User.Name << left << setw(12);
        cout << "| " << User.Password << left << setw(9);
        cout << "| " << User.NumberPermissions << left << setw(3) << endl;
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
            MyFile.open(CleintFile, ios::out);

            for(stClientData &C: vClientsData)
            {
                if (!(C.AccountNumber == ClientData.AccountNumber))
                {
                    MyFile << ConvertRecordClientsDataToLine(C) << endl;
                }
            }
        }
    
        cout << "\n\nCleint Deleted Successfolly.";

    }
    else
    {
        cout << "\nCleint with Account Number (" << AccountNumber << ") is not found";
        system("pause>0");        
    }


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


    MyFile.open("Cleints.txt", ios::in);
    while (getline(MyFile, Line))
    {
        vClientsData.push_back(ConvertLineDataToRecordClint(Line));
    }
    MyFile.close();
    
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

bool checkPermission(stUserData UserData, enOptions Options)
{
    switch (Options)
    {
    case enOptions::eShowCleintList :
        return UserData.Permtissions.ShowCleintList == 1;
    
    case enOptions::eAddNewCleint :
        return UserData.Permtissions.AddClient == 2;

    case enOptions::eDeleteCleint :
        return UserData.Permtissions.DeleteClient == 4;

    case enOptions::eUpdateCleintInfo :
        return UserData.Permtissions.UpdateClient = 8;

    case enOptions::eFindCleint :
        return UserData.Permtissions.FindCleints == 16;
    
    case enOptions::eTransaction :

        break;

    case enOptions::eManageUsar :

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
        do
        {   
            ShowMainMeneuScreen();
            NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 6]? ");
            MangameUser(NumberOfChoice);
        } while (NumberOfChoice != 6);
        
        break;

    case enOptions::eLogIn :
        Login();
        break;

    default:
        break;
    }
}

void GoToMainScreen()
{
    int NumberOfChoice;

    do
    {
    ShowMainScreen();
    NumberOfChoice = ReadPositiveNumber("Choose What do you want to do? [1 to 8]? ");
    DoOptions(NumberOfChoice);

    } while (NumberOfChoice != 9);

}

stUserData ReadUserInfo()
{
    stUserData UserData;

    cout << "Enter Username? ";
    getline(cin >> ws, UserData.Name);

    cout << "Enter Password? ";
    getline(cin >> ws, UserData.Password);


    return UserData;
    
}

bool IsUsernameExist(vector <stUserData> vUser, string Name)
{
    for (stUserData &User: vUser)
    {
        if (User.Name == Name)
        {
            return 1;
        }
    }

    return 0;
}

bool IsUserPasswordExist(vector <stUserData> vUser, string Password)
{
    for (stUserData &User: vUser)
    {
        if (User.Password == Password)
        {
            return 1;
        }
    }

    return 0;
}

bool IsUserExist(vector <stUserData>vUser, stUserData UserData)
{
    return (IsUserPasswordExist(vUser, UserData.Password) && IsUsernameExist(vUser, UserData.Name));
}

stUserData GiveFullAccess(stUserData UserData)
{
    UserData.NumberPermissions = -1;
    return UserData;
}

int GetNumberOfPermission(stUserData UserData)
{
    int x;

        x =  UserData.Permtissions.AddClient | UserData.Permtissions.ShowCleintList ;
        x = x | UserData.Permtissions.DeleteClient | UserData.Permtissions.FindCleints ; 
        x = x | UserData.Permtissions.ManageUsar | UserData.Permtissions.Transaction ;
        x = x | UserData.Permtissions.UpdateClient ;  
              
    return x;    
}

stUserData WhatThePermissions(stUserData UserData)
{
    char Answr;

    cout << "\nDo you want to give full access? y/n? ";
    cin >> Answr;
    
    if (toupper(Answr) == 'Y')
    {
        UserData.NumberPermissions = -1;
    }
    else
    {
        cout << "\nDo you want to give access to " << endl;

        cout << "\nShow Clients list? y/n? ";
        cin >> Answr;

        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.ShowCleintList = 1;
        }
        
        cout << "\n\nAdd new Client? y/n? ";
        cin >> Answr;
        
        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.AddClient = 2;
        }

        cout << "\n\nDelete Client? y/n? ";
        cin >> Answr;
        
        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.DeleteClient = 4;
        }

        cout << "\n\nUpdate Client? y/n? ";
        cin >> Answr;

        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.UpdateClient = 8;
        }

        cout << "\n\nFind Client? y/n? ";
        cin >> Answr;
        
        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.FindCleints = 16;
        }

        cout << "\n\nTransaction? y/n? ";
        cin >> Answr;
        
        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.Transaction = 32;
        }

        cout << "\n\nManage Usar? y/n? ";
        cin >> Answr;

        if (toupper(Answr) == 'Y')
        {
            UserData.Permtissions.ManageUsar = 64;
        }

        UserData.NumberPermissions = GetNumberOfPermission(UserData);
    }


    return UserData;

}

void AddUser()
{
    stUserData UserData;
    vector <stUserData>vUser = LoadUserDataFromFile();
    
    cout << "Add New Cleint\n";
    cout << "\nEnter Username? ";
    getline(cin >> ws, UserData.Name);

    cout << "\nEnter Password? ";
    getline(cin >> ws, UserData.Password);

    while (IsUsernameExist(vUser, UserData.Name))
    {

        cout << "\nUser with [" << UserData.Name << "] Already exists, Enter Username? ";
        getline(cin >> ws, UserData.Name);

    }

    while (IsUserPasswordExist(vUser, UserData.Password))
    {
        cout << "\nUser with [" << UserData.Password << "] Already exists, Enter Another Password? ";
        getline(cin >> ws, UserData.Password);
    }


    UserData = WhatThePermissions(UserData);
    AddUsersDataToFile(UserData);

 
    char Answr = 'n';
    cout << "\nUser Added Successfully, Do you want to Add more User? Y/N? ";
    cin >> Answr;

    if (toupper(Answr) == 'Y')
        AddUser();


    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0");
       

}

void AddNewUser()
{
    system("cls");
    cout << "---------------------------------------------\n";
    cout << "\t  Add New Cleint Screen\n";
    cout << "---------------------------------------------\n";

    AddUser(); 
   
}

void DeleteU()
{
    char Answr = 'n';

    stUserData UserData;
    vector <stUserData>vUser = LoadUserDataFromFile();
  
    cout << "\nEnter Username? ";
    getline(cin >> ws, UserData.Name);

    if (UserData.Name == "Admin")
    {
        cout << "You canot delete this user";
    }
    else
    {
        
        if ((IsUsernameExist(vUser, UserData.Name)))
        {
            UserData = GetUserData(vUser, UserData);
            PrintUserCard(UserData);

            cout << "\nAre you sure you want to delete this User? Y/N ?";
            cin >> Answr;

            if (toupper(Answr) == 'Y')
            {
                fstream MyFile;
                MyFile.open(UserFile, ios::out);

                for(stUserData &User: vUser)
                {
                    if (!(User.Name == UserData.Name))
                    {
                        MyFile << ConvertRecordUsersDataToLine(User) << endl;
                    }
                }
            }
            
            cout << "\n\nCleint Deleted Successfolly.";

        }
        else
        {
            cout << "\nUser with Name (" << UserData.Name << ") is not found";
        }

    }
    

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 
    
}

void DeleteUser()
{
    system("cls");

    cout << "---------------------------------------------\n";
    cout << "\t  Delete Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    DeleteU();
}

void UpdateU()
{

    char Answr = 'n';

    stUserData UserData;
    vector <stUserData>vUser = LoadUserDataFromFile();
  
    cout << "\nEnter Username? ";
    getline(cin >> ws, UserData.Name);

    if ((IsUsernameExist(vUser, UserData.Name)))
    {
        UserData = GetUserData(vUser, UserData);
        PrintUserCard(UserData);

        cout << "\nAre you sure you want to Update this User? Y/N ?";
        cin >> Answr;
        if (toupper(Answr) == 'Y')
        {
            fstream MyFile;
            MyFile.open(UserFile, ios::out);

            for(stUserData &User: vUser)
            {
                if ((User.Name == UserData.Name))
                {
                    User = ChangaUserInfo(User);
                    break;
                }
            }
            SaveUsersDataToFile(vUser);
            cout << "\nUser Added Successfully";
        }

    }
    else
    {
        cout << "\nUser with Name (" << UserData.Name << ") is not found";
    }

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 
  
}

void UpdateUser()
{
    system("cls");

    cout << "---------------------------------------------\n";
    cout << "\t  Update Cleint Screen\n";
    cout << "---------------------------------------------\n";
   
    UpdateU();
}

void FindU()
{

    char Answr = 'n';
    stUserData UserData;
    vector <stUserData>vUser = LoadUserDataFromFile();
  
    cout << "\nEnter Username? ";
    getline(cin >> ws, UserData.Name);

    if ((IsUsernameExist(vUser, UserData.Name)))
    {
        UserData = GetUserData(vUser, UserData);
        PrintUserCard(UserData);
    }
    else
    {
        cout << "\nCleint with account number(" << UserData.Name << ") Not found!\n\n\n"; 
    }

    cout << "\n\nPress any Key to go back to Main Menue...";
    system("pause>0"); 
}

void FindUser()
{
    system("cls");

    cout << "---------------------------------------------\n";
    cout << "\t  Update Cleint Screen\n";
    cout << "---------------------------------------------\n";
 
    FindU();
}

void MangameUser(int NumberOfChoice)
{
    switch ((enManageUsar)NumberOfChoice)
    {
    case enManageUsar::eListUser :
        ShowUserData();
        break;

    case enManageUsar::eAddUser :
        AddNewUser();
        break;
    
    case enManageUsar::eDeletUser :
        DeleteUser();
        break;
    
    case enManageUsar::eUpdateUser :
        UpdateUser();
        break;
    
    case enManageUsar::eFindUser :
        FindUser();
        break;
    
    case enManageUsar::emMainMeneu :
        GoToMainScreen();
        break;

    default:
        break;
    }
}

void Login()
{
    system("cls");
    ShowLoginScreen();

    stUserData UserData;
    vector <stUserData> vUser = LoadUserDataFromFile();

    cout << "\nEnter Username? ";
    getline(cin >> ws, UserData.Name);

    cout << "\nEnter Password? ";
    getline(cin >> ws, UserData.Password);

    while (!IsUserExist(vUser, UserData))
    {
        system("cls");
        ShowLoginScreen();

        cout << "Invlail Password/Username " << endl;

        cout << "\nEnter Username? ";
        getline(cin >> ws, UserData.Name);

        cout << "\nEnter Password? ";
        getline(cin >> ws, UserData.Password);
    }

    GoToMainScreen();
}

int main()
{
    Login();
    
}