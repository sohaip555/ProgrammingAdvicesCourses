#include <iostream>
using namespace std;


void ChekPIN(int x, int PINcode){

    int i = 1;
    while (x != PINcode )
    {
        if (i <= 3 )
        {
            cout << "Please enter your PIN code agsin" << endl;
            cin >> x;
        }
        else
        {
            cout << "Card is locked" << endl;
            break;
        }
        i++;
    }
    
}

int main(){

    int x, PINcode = 1234;

    ChekPIN(x, PINcode);

}