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

int main()
{
    MyTools::ResetScreen();

    vector <stEmployee> vEmployee;
    stEmployee TempEmployee;

    TempEmployee.firstName = "sohaip";
    TempEmployee.LastName = "Abu-Ghrara";
    TempEmployee.salary = 1200;

    TempEmployee.firstName = "Mohammed";
    TempEmployee.LastName = "Abu-Ghrara";
    TempEmployee.salary = 1200;

    TempEmployee.firstName = "Aya";
    TempEmployee.LastName = "Omar";
    TempEmployee.salary = 1200;

    vEmployee.push_back(TempEmployee);

    for(stEmployee &Employee : vEmployee)
    {
        cout << "First Name: " << Employee.firstName << endl;
        cout << "Last Name: " << Employee.LastName << endl;
        cout << "Salary: " << Employee.salary << endl;
    }




}