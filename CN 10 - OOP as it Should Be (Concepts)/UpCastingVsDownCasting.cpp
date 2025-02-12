#include <iostream> 
using namespace std;


class clsPerson
{
public:

    string Name;
};

class clsEmployee : public clsPerson
{
public:

    string Title;
};

int main()
{

    clsEmployee Employee1;

    Employee1.Name = "Sohaip";
    Employee1.Title = "CEO";

    clsPerson * Person1 = &Employee1;

    cout << Person1->Name;

    // clsEmployee *Employee2 = &Person1;

    // Employee1 = (clsEmployee)Person1;

}