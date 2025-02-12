#include <iostream>
using namespace std;


int main(){

    int x, PINcode = 1234;

    cout << "Please enter your PIN code" << endl;
    cin >> x;

    if (x == PINcode)
    {
        cout << "your balanse is 7500 " << endl;
    }else
    {
        cout << "Wrong PIN";
    }
    

}
