#include <iostream>
#include "..\My_Library\MyTools.h"
using namespace std;

int MySum(int a, int b)
{
    return (a + b);
}

double MySum(double a, double b)
{
    return (a + b);
}

int MySum(int a, int b, int c)
{
    return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
    return (a + b + c + d);
}


int main()
{
    MyTools::ResetScreen;
    cout << MySum(10, 20) << endl;
    cout << MySum(10.2, 10.5) << endl;
    cout << MySum(10, 20, 30) << endl;
    cout << MySum(10, 20 , 30, 40) << endl;

}