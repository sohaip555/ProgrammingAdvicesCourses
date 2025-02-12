#include <iostream>
#include "..\My_Library\MyTools.h"
using namespace std;


int main()
{
    MyTools::ResetScreen();
    cout << "Result:" << (12 | 25);
    cout << endl;
}