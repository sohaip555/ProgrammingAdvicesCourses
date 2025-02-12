#include <iostream>
using namespace std;

enum enColor{Red = 1, Blue = 2, Green = 3, Yellow = 4};


int main(){

    int c;

    cout << "**************************************************\n";
    cout << "Please chose the number of your Color \n";
    cout << "(1) Red" << endl;
    cout << "(2) Blue" << endl;
    cout << "(3) Green" << endl;
    cout << "(4) Yellow" << endl;
    cout << "**************************************************\n";
    cout << "Your choice? ";
    cin >> c;

    c = (enColor)c;

    if (c == enColor::Red)
    {
        system("color 4F");
    }
    else if (c == enColor::Blue)
    {
        system("color 1F");
    }
    else if (c == enColor::Green)
    {
        system("color 2F");
    }
    else if (c == enColor::Yellow)
    {
        system("color 6F");
    }
    
    
    return 0;
}