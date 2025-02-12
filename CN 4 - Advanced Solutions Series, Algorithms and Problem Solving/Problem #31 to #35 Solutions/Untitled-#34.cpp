#include <iostream>
#include <Cmath>
using namespace std;


int ReadSalse(int &Salse)
{
    cout << "Please enter Salse: " << endl;
    cin >> Salse;

    return Salse;
}

double CalculateBonus(int Salse)
{
    if (Salse >= 100000)
    {
        return Salse * 0.01;
    }
    else if (Salse >= 500000)
    {
        return Salse * 0.02;
    }
    else if (Salse >= 100000)
    {
        return Salse * 0.03;
    }
    else if (Salse >= 50000)
    {
        return Salse * 0.05;
    }
    else
    {
        return Salse;
    }
    
}

void PrintResult(string Massage, float Salse)
{
    cout << Massage << Salse;
}

int main(){

    int Salse;
    ReadSalse(Salse);
    PrintResult("Your Bonus is " , CalculateBonus(Salse));

    return 0;
}