#include <iostream>
#include <vector>
using namespace std;



int main()
{
    vector <int> vNumbers = {12, 3 , 25, 9, 44, 78, 15};


    for(int &Number: vNumbers)
    {
        cout << Number << " ";
    }
    cout << endl;
}