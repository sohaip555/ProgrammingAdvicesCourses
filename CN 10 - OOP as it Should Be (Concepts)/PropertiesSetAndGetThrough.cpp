#include <iostream>
using namespace std;


class clsPerson
{
private:
    int _ID = 1234;
    string _FirstName;
    string _LastName;


public:

    int GetID()
    {
        return _ID;
    }

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


    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
    // __declspec(property(get = GetLastName, put = SetLastName)) string LastName;
    // __declspec(property(get = GetFullName)) string FullName;


};

int main()
{

    clsPerson Person1;

    Person1.SetFirstName("Sohaip");

    cout << "First name : " << Person1.GetFirstName() << endl;

}