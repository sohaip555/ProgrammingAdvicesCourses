#include <iostream>
using namespace std;

struct  employment
{
    int Ege, DriverLicense;
    bool ResoltOfEga, ResoltOfDriverLicense;
};

bool Ega(int ega)
{
    if(ega > 21)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool DriverLicense(int NumberOFLicense)
{
    if (NumberOFLicense > 0)
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main(){

    employment employment1;
    employment1.DriverLicense;
    employment1.ResoltOfDriverLicense;
    employment1.Ege;
    employment1.ResoltOfEga;

    cout << "Please enter your ega " << endl;
    cin >> employment1.Ege;

    cout << "Please enter number of your Driver license " << endl;
    cin >> employment1.DriverLicense;

    employment1.ResoltOfEga = Ega(employment1.Ege);
    employment1.ResoltOfDriverLicense = DriverLicense(employment1.DriverLicense);

    if (employment1.ResoltOfEga == true || employment1.ResoltOfDriverLicense == true )
    {
        cout << "you are hired" << endl;
    }else
    {
        cout << "you are rejected" << endl;
    }

    return 0;
}