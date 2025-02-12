#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

string ReplaceWords(string S, string ToReplace, string ReplaceTo)
{
    int x;
    while ((x = S.find(ToReplace)) != std::string::npos)
    {
        S.replace(x, ToReplace.length(), ReplaceTo);
    }
    return S;    
}

int main()
{
    string S = Mystd::ReadString();
    cout << "\n\nOrigial string: " << S << endl;
    cout << "String after Replace Word: " << ReplaceWords(S, "Sohaip", "Ahmed") << endl;
    system("pause>0");  

    return 0;
}