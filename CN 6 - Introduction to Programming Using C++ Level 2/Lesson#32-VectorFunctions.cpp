#include <iostream>
#include <vector>
#include "..\My_Library\MyTools.h"
using namespace std;

int main()
{
    // MyTools::ResetScreen();
    vector <int> vNumbers;
    
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // vNumbers.clear();

    cout << "First Elamant: " << vNumbers.front() << endl;

    cout << "List Elamant: " << vNumbers.back() << endl;

    cout << "Size: " << vNumbers.size() << endl;

    cout << "capacty: " << vNumbers.capacity() << endl;

    cout << "Empty: " << vNumbers.empty() << endl;

    cout << "Number of Vector: ";

    for(int &Number: vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}