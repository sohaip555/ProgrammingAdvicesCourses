#include <iostream>
using namespace std;


struct  strInfo
{
    string FirstName, Lastname, Phone;
    int Age;
};

void ReadInfo(strInfo& Info){

    cout << "Please enter your first name" << endl;
    cin >> Info.FirstName;

    cout << "Please enter your last name" << endl;
    cin >> Info.Lastname;

    cout << "Please enter your age" << endl;
    cin >> Info.Age;

    cout << "Please enter your phone number" << endl;
    cin >> Info.Phone;
}

void PrintInfo(strInfo Info){

    cout << "************************************************************\n";
    cout << "your first name is: " << Info.FirstName << endl ;
    cout << "your last name is: " << Info.Lastname << endl;
    cout << "tour age is: " << Info.Age << endl;
    cout << "your phone neumber is: " << Info.Phone << endl;
    cout << "************************************************************\n";
}

void ReadPersonsInfo(strInfo Info[100], int numberOfPerson){

    for (int i = 0; i < numberOfPerson; i++)
    {
            ReadInfo(Info[i]);
    }
    
}

void PrintPersonInfo(strInfo Info[100], int numberOfPerson){

    for (int i = 0; i < numberOfPerson; i++)
    {
            cout << "Person " << i << "info" << endl;
            PrintInfo(Info[i]);
    }
    
}


int main(){

    int numberOfPerson;
    strInfo Person[100];

    cout << "Please enter the number of person you want: ";
    cin >> numberOfPerson;

    ReadPersonsInfo(Person, numberOfPerson);
    PrintPersonInfo(Person, numberOfPerson);
 
}

