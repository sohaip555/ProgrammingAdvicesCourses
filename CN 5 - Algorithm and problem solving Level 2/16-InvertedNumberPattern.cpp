#include <iostream>
using namespace std;

void PrintWordFromAAAToZZZ()
{
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int n = 65; n <= 90; n++)
            {
                cout << char(65 + i) << char(65 + j) << char(n);
                cout << endl;
            }
        }
    }
}

int main()
{
    int[] Number = {3,5,6,7,8};

    // PrintWordFromAAAToZZZ();
}