#include <iostream>
using namespace std;


class clsPerson
{


private:

    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;

public:

    clsPerson(int ID, string FirstName, string LastName, string Email, string PhoneNumber)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }

    clsPerson()
    {

    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    void SetPhoneNumber(string PhoneNumber)
    {
        _PhoneNumber = PhoneNumber;
    }

    int ID()
    {
        return _ID;
    }

    string FirstName()
    {
        return _FirstName;
    }

    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return _FirstName + _LastName;
    }

    string Email()
    {
        return _Email;
    }

    string PhoneNumber()
    {
        return _PhoneNumber;
    }

    void Print()
    {
        cout << "Info" << endl;
        cout << "____________________________________\n\n";

        cout << "ID         : " << _ID << endl;
        cout << "First name : " << _FirstName << endl;
        cout << "Last name  : " << _LastName << endl;
        cout << "Full name  : " << FullName() << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      :" << _PhoneNumber << endl;

        cout << "____________________________________\n";
    }

    void SendEmail(string Supject, string Body)
    {
        cout << "\n\nThe following Message successfully to email: " << _Email << endl;

        cout << "Supject: " << Supject << endl;
        cout << "Body: " << Body << endl;

    }

    void SendSMS(string Message)
    {
        cout << "\n\nThe following SMS successfully to Phone: " << _PhoneNumber << endl;
        cout << Message << endl;

    }




};

class clsEmployee : public clsPerson 
{

    int Title;
    int Salary;
    int Department;

};

int main()
{
 
    clsEmployee Person1;
    Person1.Print();


    system("pause>0");
}