#include <iostream>
using namespace  std;


int main(){

// string Name = "MohammedAbu-hadhoud"  ;
// int Age = 44;
// string City = "Amman";
// string Country = "Jordan";
// float Monthe_salary = 5000;
// char Gemder = 'M';
// bool Married = true;


string Name ;
short Age ;
string City ;
string Country ;
float Monthe_salary ;
char Gemder ;
bool Married ;

cout << "Please enter your Name" << endl;
cin >> Name;

cout << "Please enter your Age" << endl;
cin >> Age;

cout << "Please enter your City" << endl;
cin >> City;

cout << "Please enter your Country" << endl;
cin >> Country;

cout << "Please enter your Monthe_salary" << endl;
cin >> Monthe_salary;

cout << "Please enter your Gemder M/F" << endl;
cin >> Gemder;

cout << "Please enter your Married 1/0" << endl;
cin >> Married;


cout <<"**********************************************************" <<endl;
cout <<"Name : " << Name << endl;
cout <<"Age : " << Age << endl;
cout <<"City : " << City << endl;
cout <<"Country : " << Country << endl;
cout <<"Monthe Salary : " << Monthe_salary << endl;
cout <<"yearly Salary : " << Monthe_salary * 12 << endl;
cout <<"Gemder : " << Gemder << endl;
cout <<"Married : " << Married << endl;
cout <<"**********************************************************" << endl;



   return 0;

}