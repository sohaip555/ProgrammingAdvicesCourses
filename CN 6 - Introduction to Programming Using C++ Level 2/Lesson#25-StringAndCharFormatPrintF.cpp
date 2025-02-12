#include <iostream>
#include <cstdio>
using namespace std;


struct strInfo
{
    char FillName[25], City[15], Country[15], Phone[15];
    short Age, Monthe_salary ;
    char Gender ;
    bool Married ;
};

void ReadInfo(strInfo &Info){

    cout << "Please enter your Name" << endl;
    // cin.ignore(1, '\n');
    cin >> Info.FillName;

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
    // cout <<"Name: " << Info.FillName << endl;
    printf("Name: %*s\n", 5, Info.FillName);
    // cout <<"Age: " << Info.Age << endl;
    printf("Age: %d\n", Info.Age);
    // cout <<"City: " << Info.City << endl;
    printf("City: %s\n", Info.City);
    // cout <<"Country: " << Info.Country << endl;
    printf("Country: %s\n",Info.Country);
    // cout <<"Monthe Salary: " << Info.Monthe_salary << endl;
    printf("Monthe Salary: %d\n", Info.Monthe_salary);
    // cout <<"yearly Salary: " << Info.Monthe_salary * 12 << endl;
    printf ("yearly Salary: %d\n", Info.Monthe_salary*12);
    // cout <<"Gemder: " << Info.Gender << endl;
    printf("Gemder: %c\n",Info.Gender);
    cout <<"Married: " << Info.Married << endl;
    cout <<"**********************************************************" << endl;
}


int main(){

    strInfo Person1Info;
    ReadInfo(Person1Info);
    PrintInfo(Person1Info);

    return 0;
}