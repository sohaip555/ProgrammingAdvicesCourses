#include <iostream>
using namespace std;

void MyFun()
{
    static int Number = 0;
    cout << "My Volue is " << Number << endl;

    Number++;
}

int main()
{    
    MyFun();
    MyFun();
    MyFun();
}