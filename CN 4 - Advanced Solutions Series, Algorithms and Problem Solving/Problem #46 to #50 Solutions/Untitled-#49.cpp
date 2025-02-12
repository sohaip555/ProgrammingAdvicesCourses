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

bool Login()
{
    int PINcode;
    do
    {
        PINcode = ReadPositiveNumber("Please enter your PIN code");

        if (PINcode == 1234)
        {
            system("Color 2F");
            cout << "your balanse is 7500 " << endl;
            return 1;
        }else
        {
            system("Color 4F");
            cout << "Wrong PIN" << endl;
        }
    } while (true);
}

int main(){

    int Number, PINcode = 1234;
    Login();    
}