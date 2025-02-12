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
    int PINcode, i = 1;
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
            cout << "Wrong PIN you have " << 3 - i << " more trise" << endl;
        }
        i++;
    } while (i <= 3);
    cout << "Your card is blocked call The bank for help ";
    return 0;
}

int main(){
    
    
    Login();    
}