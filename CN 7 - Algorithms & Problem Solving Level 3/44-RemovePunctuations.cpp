#include <iostream>
#include <string>
#include <cctype>
#include "..\My_Library\Mystd.h"
using namespace std;

string RemovwPonct(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        if (ispunct(S[i]))
        {
            S.replace(i, 1, "");
        }
    }
    return S;
}

int main()
{
    string S = Mystd::ReadString();


    cout << "Origial string: \n";
    cout << S << endl;

    cout << "Ponctuations Removed: \n";
    cout << RemovwPonct(S) << endl;

    return 0;
}