#include <iostream>
#include <cctype>
using namespace std;



int main()
{
    char x = toupper('a');
    char w = tolower('A');

    cout << "Conveting a to A: " << x << endl;
    cout << "Conveting A to a: " << w << endl;

    cout << "is upper(a): " << isupper('a') << endl;
    cout << "is lower(A): " << islower('A') << endl;

    cout << "isdigit(9): " << isdigit('A') << endl;
    cout << "ispunct(#): " << ispunct('#') << endl;


}