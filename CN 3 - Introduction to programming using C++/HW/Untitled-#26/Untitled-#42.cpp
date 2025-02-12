#include <iostream>
#include <Cmath>
using namespace std;


int main(){
    int NumberOfdays , NumberOfHours, NumberOfMinutes, NumberOfSeconde, Resolt;

    cout << "Please enter the number of days" << endl;
    cin >> NumberOfdays;
    NumberOfdays *= 86400;

    cout << "Please enter the number of hour" << endl;
    cin >> NumberOfHours;
    NumberOfHours *= 3600;

    cout << "Please enter the number of minutes" << endl;
    cin >> NumberOfMinutes;
    NumberOfMinutes *= 60;

    cout << "Please enter the number of seconde" << endl;
    cin >> NumberOfSeconde;

    Resolt = NumberOfdays + NumberOfHours + NumberOfMinutes + NumberOfSeconde;

    cout << round(Resolt);

    return 0;
}