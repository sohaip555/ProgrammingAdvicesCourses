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

    int _Salary;
    string _Department;
    string _Title;


public:

    clsEmployee(int ID, string FirstName, string LastName, string Email,
                 string Phone, string  Title, string Deparment, int Salary)
                : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Department = Deparment;
        _Title = Title;
        _Salary = Salary;
    }

    void SetSalary(int Salary)
    {
        _Salary = Salary;
    }

    void SetDaperment(string Deparment)
    {
        _Department = Deparment;
    }

    void SetTitle(string Title)
    {
        _Title = Title;
    }

    int Salary()
    {
        return _Salary;
    }

    string Department()
    {
        return _Department;
    }

    string Title()
    {
        return _Title;
    }

    void Print()
    {
        cout << "Info" << endl;
        cout << "____________________________________\n\n";

        cout << "ID         : " << ID() << endl;
        cout << "First name : " << FirstName() << endl;
        cout << "Last name  : " << LastName() << endl;
        cout << "Full name  : " << FullName() << endl;
        cout << "Email      : " << Email() << endl;
        cout << "Phone      : " << PhoneNumber() << endl;
        cout << "Title      : " << _Title << endl;
        cout << "Department : " << _Department << endl;
        cout << "Salary     : " << _Salary << endl; 

        cout << "____________________________________\n";
    }

};

class clsDeveloper :public clsEmployee
{
private:

    string _MainProgramingLanguage;

public:

    clsDeveloper(int ID, string FirstName, string LastName, string Email,
                 string Phone, string  Title, string Deparment, int Salary, string MainProgramingLanguage)
                 : clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Deparment, Salary)
    {
        _MainProgramingLanguage = MainProgramingLanguage;

    }

    void SetMainProgramingLanguage(string MainProgramingLanguage)
    {
        _MainProgramingLanguage = MainProgramingLanguage;
    }

    string MainProgramingLanguage()
    {
        return _MainProgramingLanguage;
    }

    void Print()
    {
        cout << "Info" << endl;
        cout << "____________________________________\n\n";

        cout << "ID         : " << ID() << endl;
        cout << "First name : " << FirstName() << endl;
        cout << "Last name  : " << LastName() << endl;
        cout << "Full name  : " << FullName() << endl;
        cout << "Email      : " << Email() << endl;
        cout << "Phone      : " << PhoneNumber() << endl;
        cout << "Title      : " << Title() << endl;
        cout << "Department : " << Department() << endl;
        cout << "Salary     : " << Salary() << endl; 
        cout << "PLanguage  : " << _MainProgramingLanguage << endl;
        cout << "____________________________________\n";
    }


};

int main()
{
 
    clsDeveloper Developer1(10, "Mohammed", "Abu-Hadhoud", "A@a.com", "8298982",
                            "Web Developer", "ProgrammingAdvices", 5000, "C++");
    Developer1.Print();

    system("pause>0");
}