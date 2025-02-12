#include <iostream>
using namespace std;


int main(){

    int Mark1, Mark2, Mark3;
    float AVR;

    cout << "Please enter your mark1" << endl;
    cin >> Mark1;

    cout << "Please enter your mark2" << endl;
    cin >> Mark2;
    
    cout << "Please enter your mark3" << endl;
    cin >> Mark3;

    AVR = (Mark1 + Mark2 + Mark3) / 3;
    if (AVR >= 50)
    {
        cout << AVR;
        cout << "you PASS";
    }
    else
    {
        cout << AVR;
        cout << "You fail";
    }
    
    
 
}