#include <iostream>
using namespace std;

enum enColor{Red = 1, Blue = 2, Green = 3, Yellow = 4};


int main(){


    int day = 2;

    cout << "Please enter number of day";
    cin >> day;

    switch (day)
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

    return 0;
}