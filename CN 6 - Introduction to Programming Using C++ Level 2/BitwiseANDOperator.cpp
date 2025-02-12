#include <iostream>
#include "..\My_Library\MyTools.h"
using namespace std;


int main()
{
    MyTools::ResetScreen();
    cout << "Result:" << (1222 & 1352);
    cout << endl;
}