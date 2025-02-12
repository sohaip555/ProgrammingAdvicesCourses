#include <iostream>
using namespace std;

enum enMonth{January = 1, February, March, April, May, June, July, August, September, October, November, December};

int main(){

    int Monthe;

    cout << "1-January" << endl;
    cout << "2-February" << endl;
    cout << "3-March" << endl;
    cout << "4-April" << endl;
    cout << "5-May" << endl;
    cout << "6-June" << endl;
    cout << "7-July" << endl;
    cout << "8-August" << endl;
    cout << "9-September" << endl;
    cout << "10-October" << endl;
    cout << "11-November" << endl;
    cout << "12-December" << endl;


    cout << "Please enter number of your Monthe " << endl;
    cin >> Monthe;

    switch ((enMonth)Monthe)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
     case 5:
        cout << "May" << endl;
        break;
     case 6:
        cout << "June" << endl;
        break;
     case 7:
        cout << "July" << endl;
        break;
     case 8:
        cout << "August" << endl;
        break;
     case 9:
        cout << "September" << endl;
        break;
     case 10:
        cout << "October" << endl;
        break;
     case 11:
        cout << "November" << endl;
        break;
     case 12:
        cout << "December" << endl;
        break;
     
    default:
        break;
    }


    return 0;
}