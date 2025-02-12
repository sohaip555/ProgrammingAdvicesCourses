#include <iostream>
using namespace std;

struct stEmplyee
{
    string name;
    float salary;

};


int main()
{

    stEmplyee Emplyee;
    stEmplyee *Ptr;

    Emplyee.name = "Sohaip Abu-Ghrara";
    Emplyee.salary = 1400;


    cout << Emplyee.name << endl;
    cout << Emplyee.salary << endl;

    Ptr = &Emplyee;

    cout << "\nUsing Pointer\n" << endl;

    cout << &Ptr->name << endl;
    cout << &Ptr->salary << endl;



}