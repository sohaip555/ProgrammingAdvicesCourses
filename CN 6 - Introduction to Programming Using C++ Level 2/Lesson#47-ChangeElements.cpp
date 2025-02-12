#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> num = {1, 2, 3, 4, 5};

    for(const int& i: num)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << endl;

    for(int &i: num)
    {
        i = 20;
        cout << i << " ";
    }

    num[1] = 40;
    num.at(3) = 80;
    num.at(4) = 90;

    cout << endl;
    cout << endl;

    for(const int& i: num)
    {
        cout << i << " ";
    }

}