#include <iostream>
using namespace std;



int main(){

// NumberOfDays = 86400
// NumberOfHours = 3600
// NumberOfMinutes = 60
// NumberOfSeconds = 1

int TotelOfSeconde, NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
float FloatTestNumber;
int IntTestNumber;

cout << "Please enter your time" << endl;
cin >> TotelOfSeconde;

FloatTestNumber = TotelOfSeconde / 60.0; 
IntTestNumber = TotelOfSeconde / 60.0;


// أمر الطباعة لي التحقق من عدد الثواني
// cout << NumberOfSeconds << endl;
NumberOfSeconds = (FloatTestNumber - IntTestNumber) * 60;

FloatTestNumber = FloatTestNumber / 60.0; 
IntTestNumber = IntTestNumber / 60.0;

// أمر الطباعة لي التحقق من عدد الدقائق
// cout << NumberOfMinutes << endl;
NumberOfMinutes = (FloatTestNumber - IntTestNumber) * 60;


FloatTestNumber = FloatTestNumber / 24.0; 
IntTestNumber = IntTestNumber / 24.0;

// أمر الطباعة لي التحقق من عدد الساعات
// cout << NumberOfHours << endl;
NumberOfHours = (FloatTestNumber - IntTestNumber) * 24;


// أمر الطباعة لي التحقق من عدد الساعات
// cout << NumberOfDays << endl;
NumberOfDays = IntTestNumber;


cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << NumberOfSeconds;
        

}


