#include <iostream>
#include <string>
using namespace std;


struct strInfo
{
    string FillName, City, Country, Phone;
    short Age, Monthe_salary ;
    char Gender ;
    bool Married ;
};

void ReadInfo(strInfo &Info){

    cout << "Please enter your Name" << endl;
    getline(cin, Info.FillName);

    cout << "Please enter your Age" << endl;
    cin >> Info.Age;

    cout << "Please enter your City" << endl;
    cin >> Info.City;

    cout << "Please enter your Country" << endl;
    cin >> Info.Country;

    cout << "Please enter your Monthe_salary" << endl;
    cin >> Info.Monthe_salary;

    cout << "Please enter your Gemder M/F" << endl;
    cin >> Info.Gender;

    cout << "Please enter your Married 1/0" << endl;
    cin >> Info.Married;
}

void PrintInfo(strInfo Info){

    cout <<"**********************************************************" <<endl;
    cout <<"Name: " << Info.FillName << endl;
    cout <<"Age: " << Info.Age << endl;
    cout <<"City: " << Info.City << endl;
    cout <<"Country: " << Info.Country << endl;
    cout <<"Monthe Salary: " << Info.Monthe_salary << endl;
    cout <<"yearly Salary: " << Info.Monthe_salary * 12 << endl;
    cout <<"Gemder: " << Info.Gender << endl;
    cout <<"Married: " << Info.Married << endl;
    cout <<"**********************************************************" << endl;
}


int main(){

    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}