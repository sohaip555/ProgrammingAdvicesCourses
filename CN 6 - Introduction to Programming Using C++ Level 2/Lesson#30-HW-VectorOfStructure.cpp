#include <iostream>
#include <vector>
#include "..\My_Library\MyTools.h"
using namespace std;

struct stEmployee
{
    string firstName;
    string LastName;
    int salary;
};

void ReadInfo(vector <stEmployee> & vEmployee)
{
    stEmployee TempEmployee;
    char condition = 'Y';

    while (condition == 'Y' || condition == 'y')
    {

        cout << "\nEnter First name : ";
        cin >> TempEmployee.firstName;

        cout << "\nEnter last name : ";
        cin >> TempEmployee.LastName;

        cout << "\nEnter the salary : ";
        cin >> TempEmployee.salary;
        vEmployee.push_back(TempEmployee);

        cout << "\nDo you want Add emplotee Y/N?";
        cin >> condition;
    }
    
}

void PrintInfo(vector <stEmployee> & vEmployee)
{
    for(stEmployee &Employee : vEmployee)
    {
        cout << "\n\nFirst Name : " << Employee.firstName << endl;
        cout << "Last Name : " << Employee.LastName << endl;
        cout << "Salary: " << Employee.salary << endl;
    }
}

int main()
{
    MyTools::ResetScreen();

    vector <stEmployee> vEmployee;

    ReadInfo(vEmployee);
    PrintInfo(vEmployee);

}