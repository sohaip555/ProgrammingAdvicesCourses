#include <iostream>
#include <vector>
#include "..\My_Library\MyTools.h"
using namespace std;

int main()
{
    MyTools::ResetScreen();
    vector <int> vNumbers;
    
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);
    vNumbers.push_back(60);
    vNumbers.push_back(70);
    vNumbers.push_back(80);
    vNumbers.push_back(90);

    // vNumbers.clear();

    // cout << "Number size : " << vNumbers.size() << endl;

    // vNumbers.pop_back();
    // vNumbers.pop_back();
    // vNumbers.pop_back();

    // cout << "Number size : " << vNumbers.size() << endl;

    cout << "Number of Vector : ";

    if (!vNumbers.empty())
        vNumbers.pop_back(); 


    for(int &Number: vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}