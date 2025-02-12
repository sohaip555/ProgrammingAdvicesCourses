#include <iostream>
#include <Cmath>
using namespace std;


int main(){

short NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
int Total;

cout << "Please enter your Days ";
cin >> NumberOfDays;

cout << "Please enter your Hours ";
cin >> NumberOfHours;


cout << "Please enter your Minutes ";
cin >> NumberOfMinutes;


cout << "Please enter your Seconds ";
cin >> NumberOfSeconds;

Total = (NumberOfDays * 24 * pow(60, 2)) + (NumberOfHours * pow(60, 2)) + (NumberOfMinutes * 60) + NumberOfSeconds;


cout << Total;


}