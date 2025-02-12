#include <iostream>
using namespace std;


struct  strInfo
{
    string FirstName, Lastname, Phone;
    int Age;
};


int main(){

    strInfo Persons[1];

    Persons[0].FirstName = "sohaip";
    Persons[0].Lastname = "abughrara";
    Persons[0].Phone = "0914163016";
    Persons[10].Age = 20;

    Persons[1].FirstName;
    Persons[1].Lastname;
    Persons[1].Phone;
    Persons[1].Age = 22;

    cout << Persons[1].Age;
}