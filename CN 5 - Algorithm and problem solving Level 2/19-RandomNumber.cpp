#include <iostream>
#include <cstdlib>
#include <Time.h>
using namespace std;

int RandomNumber(int From, int To)
{
    int Result = rand() % (To - From + 1) + From;
    return Result;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(20, 50) << endl;
    cout << RandomNumber(3, 100) << endl;
    cout << RandomNumber(60, 70) << endl;
}