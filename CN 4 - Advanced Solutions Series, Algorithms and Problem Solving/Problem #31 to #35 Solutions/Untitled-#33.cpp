#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

char GetGradeLetter(int Grade)
{
    if ( Grade >= 90)
        return 'A';
    else if ( Grade >= 80)
        return 'B';
    else if ( Grade >= 70)
        return 'C';
    else if ( Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}


int main(){

    string str1;
    int Grade ;

    Grade = ReadPositiveNumber("Please enter your grade? ");
    cout << (GetGradeLetter(Grade));

    return 0;
}