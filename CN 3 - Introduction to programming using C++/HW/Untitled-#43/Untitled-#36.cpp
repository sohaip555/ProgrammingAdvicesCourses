#include <iostream>
using namespace std;



int main(){

    float Number1, Number2;
    char Operation;

    cout << "Please enter your number1: " << endl;
    cin >> Number1;

    cout << "Piease enter your Number2: " << endl;
    cin >> Number2;

    cout << "Plrae enter the operation type: " << endl;
    cin >> Operation;

    if (Operation == '+')
    {
        cout << Number1 + Number2;
    }
    else if (Operation == '-')
    {
        cout << Number1 - Number2;
    }
    else if (Operation == '*')
    {
        cout << Number1 * Number2;
    }
    else
    {
        cout << Number1 / Number2;
    }
    
    return 0;
}