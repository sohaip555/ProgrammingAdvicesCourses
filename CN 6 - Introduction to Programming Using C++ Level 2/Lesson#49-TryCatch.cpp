#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> num = {1, 2, 3, 4, 5};

    try
    {
        num.at(5);
    }
    catch(...)
    {
        cout << " Errer";
    }
    

}