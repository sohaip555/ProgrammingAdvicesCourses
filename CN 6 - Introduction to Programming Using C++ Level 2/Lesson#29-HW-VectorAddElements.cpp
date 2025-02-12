#include <iostream>
#include <vector>
#include "..\My_Library\MyTools.h"
using namespace std;

void ReadNumber(vector <int> & vNumber)
{
    int Number = 0;
    char condition = 'N';
    do
    {

        cout << "\nPlease enter your number" << endl;
        cin >> Number;
        vNumber.push_back(Number);
        
        cout << "Do you want to enter anthir number ";
        cin >> condition;

    } while (condition == 'Y' || condition == 'y');
    
}

void PrintNumber(vector <int> & vNumber)
{
    for(int &Number : vNumber)
    {
        cout << Number << " ";
    }
}

int main()
{
    MyTools::ResetScreen();
    vector <int> vNumbers;
    
    ReadNumber(vNumbers);
    PrintNumber(vNumbers);

}