#include <iostream>
using namespace std;


class clsPerson
{
private:
    string _FirstName;
    string _LastName;


public:

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }




};

class Employee
{

private:
    string _EmployeeFirstName;
    string _EmployeeLastName;
    int _EmployeeID;

public:

    void SetEmployeeFirstName(string FirstName)
    {
        _EmployeeFirstName = FirstName;
    }

    void SetEmployeeLastName(string LastName)
    {
        _EmployeeLastName = LastName;
    }

    string GetEmployeeFirstName()
    {
        return _EmployeeFirstName;
    }

    string GetEmployeeLastName()
    {
        return _EmployeeLastName;
    }

    string GetEmployeeFullName()
    {
        return _EmployeeFirstName + " " + _EmployeeLastName;
    }

};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Sohaip");
    Person1.SetLastName("Abu-Ghrara");

    cout << "First name : " << Person1.GetFirstName() << endl;
    cout << "Last name  : " << Person1.GetLastName() << endl;
    cout << "Full name  : " << Person1.GetFullName() << endl;

}