#include <iostream>
using namespace std;

enum enWeek{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

void ShowWeekDay(){
    cout << "\n*******************************\n";
    cout << "           Week Day                ";
    cout << "\n*******************************\n"; 
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thursday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "*******************************\n";

}

enWeek ReadeWeek(){
    int day;
    cout << "Please enter number of day: ";
    cin >> day;

    return (enWeek)day;
}

string GetWeekDay(enWeek Day){

    switch (Day)
    {
    case  1:
        return "Sunday" ;
    case  2:
        return "Monday" ;
    case  3:
        return "Tuesday" ;
    case  4:
        return "Wednesday" ;
    case  5:
        return "Thursday" ;
    case  6:
        return "Friday" ;
    case  7:
        return "Saturday" ;
    default:
        return "Not a week day! \n";
    }
}


int main(){

    enWeek D;

    ShowWeekDay();
    D = ReadeWeek();

    (D <= 7 && D >= 1) ? cout << "to day is " << GetWeekDay(D) : cout << GetWeekDay(D) ;


}