#include <iostream>
using namespace std;


struct strInfo
{
    string FirstName, lastName, Phone;
    int Age;
};

void ReadInfo(strInfo &Info){
    cout << "Please enter your first name" << endl;
    cin >> Info.FirstName;

    cout << "Please enter your last name" << endl;
    cin >> Info.lastName;

    cout << "Please enter your age" << endl;
    cin >> Info.Age;

    cout << "Please enter you phone number" << endl;
    cin >> Info.Phone;
}

void PrintInfo(strInfo Info){

    cout << "\n************************************************\n";
    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.lastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone number: " << Info.Phone << endl;
    cout << "************************************************\n";
}


int main(){

    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}