#include <iostream>
using namespace std;

enum enFavoriteColor{Blue, Black, Red, Yellow, Purple};

enum enGendor{Male, female};

enum enMaritalStatus{Sengil, Married};

struct stContactInformation
{
    string Email ,FacebookAccount, PhoneNumber;
};


struct stAddress
{
    string City, Country, POBOX;
};


struct  stID
{
    string FillName;
    short Age, MonthlySalary, YearlySalary;
    stAddress addresso;
    stContactInformation contactInformation;
    enGendor MyGendor;
    enMaritalStatus MymaritalStatus; 
    enFavoriteColor MyFavoriteCol;
};


int main(){

stID Person1;

Person1.FillName = "Sohaip Abughrara";
Person1.Age = 20;
Person1.MonthlySalary = 1200;
Person1.YearlySalary = Person1.MonthlySalary * 12;

Person1.addresso.Country = "Libya";
Person1.addresso.City = "Tripoli";

Person1.contactInformation.Email = "sohupabughrara@gmail.com";
Person1.contactInformation.FacebookAccount = "sohup BA";
Person1.contactInformation.PhoneNumber = "0914163016";

Person1.MyGendor = enGendor::Male;
Person1.MymaritalStatus = enMaritalStatus::Married ;
Person1.MyFavoriteCol = enFavoriteColor::Red;

cout << "************************************************************************" << endl;

cout << "Nume: " << Person1.FillName << endl;

cout << "Age: " << Person1.Age << endl;

cout << "City: " << Person1.addresso.City << endl;

cout << "Country: " << Person1.addresso.Country << endl;

cout << "Monthly Salary: " << Person1.MonthlySalary << endl;

cout << "Yearly Salary: " << Person1.YearlySalary << endl;

cout << "Gender: " << Person1.MyGendor << endl;

cout << "Married: " << Person1.MymaritalStatus << endl;

cout << "My favorite color is " << Person1.MyFavoriteCol << endl;

cout << "Email: " << Person1.contactInformation.Email << endl;

cout << "Facebook account: " << Person1.contactInformation.FacebookAccount << endl;

cout << "Phone number: " << Person1.contactInformation.PhoneNumber << endl;

cout << "**********************************************************************";





   return 0;
}