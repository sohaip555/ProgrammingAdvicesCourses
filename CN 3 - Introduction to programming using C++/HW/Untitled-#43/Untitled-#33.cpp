#include <iostream>
using namespace std;


int main(){

    string str1;
    short Grade ;

    cout << "Please enter your grade " << endl;
    getline(cin, str1);

    Grade = stoi(str1);
    if ( Grade >= 90)
    {
        cout << "A";
    }
    else if ( Grade >= 80)
    {
        cout << "B";
    }
    else if ( Grade >= 70)
    {
        cout << "C";
    }
    else if ( Grade >= 60)
    {
        cout << "D";
    }
    else if (Grade >= 50)
    {
        cout << "E" ;
    }
    else
    {
        cout << "F";
    }

    return 0;
}



















