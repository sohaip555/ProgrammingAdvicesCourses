#include <iostream>
using namespace std;


struct ContactInformation
{
    string Email ,FacebookAccount, PhoneNumber;
};


struct Address
{
    string City, Country, POBOX;
};


struct  id
{
    string FillName;
    short Age, MonthlySalary, YearlySalary;
    char Gender;
    bool Married;
    Address addresso;
    ContactInformation contactInformation;
};


int main(){

id Num1, Num2, Num3;

Num1.FillName = "Sohaip Abughrara";
Num1.Age = 20;
Num1.addresso.Country = "Libya";
Num1.addresso.City = "Tripoli";
Num1.MonthlySalary = 1200;
Num1.YearlySalary = Num1.MonthlySalary * 12;
Num1.Gender = 'M';
Num1.Married = true;
Num1.contactInformation.Email = "sohupabughrara@gmail.com";
Num1.contactInformation.FacebookAccount = "sohup BA";
Num1.contactInformation.PhoneNumber = "0914163016";



cout << "************************************************************************" << endl;

cout << "Nume: " << Num1.FillName << endl;

cout << "Age: " << Num1.Age << endl;

cout << "City: " << Num1.addresso.City << endl;

cout << "Country: " << Num1.addresso.Country << endl;

cout << "Monthly Salary: " << Num1.MonthlySalary << endl;

cout << "Yearly Salary: " << Num1.YearlySalary << endl;

cout << "Gender: " << Num1.Gender << endl;

cout << "Married: " << Num1.Married << endl;

cout << "Email: " << Num1.contactInformation.Email << endl;

cout << "Facebook account: " << Num1.contactInformation.FacebookAccount << endl;

cout << "Phone number: " << Num1.contactInformation.PhoneNumber << endl;

cout << "**********************************************************************";






   return 0;
}