#include <iostream>
using namespace std;

enum enWeek{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){

    int day;

    cout << "1-Sunday" << endl;
    cout << "2-Monday" << endl;
    cout << "3-Tuesday" << endl;
    cout << "4-Wednesday" << endl;
    cout << "5-Thursday" << endl;
    cout << "6-Friday" << endl;
    cout << "7-Saturday" << endl;

    cout << "Please enter the number of day: " << endl;
    cin >> day;

    switch ((enWeek)day)
    {
    case  1:
        cout << "Sunday" ;
        break;
    case  2:
        cout << "Monday" ;
        break;
    case  3:
        cout << "Tuesday" ;
        break;
    case  4:
        cout << "Wednesday" ;
        break;
    case  5:
        cout << "Thursday" ;
        break;
    case  6:
        cout << "Friday" ;
        break;
    case  7:
        cout << "Saturday" ;
        break;
    default:
        cout << "Not a meek day! \n";
        break;
    }

}