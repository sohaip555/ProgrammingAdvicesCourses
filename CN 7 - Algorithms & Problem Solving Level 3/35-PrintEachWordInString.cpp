#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

void PrintEachWordInString(string Word)
{
    string w;
    int f;
    while ((f = Word.find(" ")) != Word.npos)
    {
        w = Word.substr(0, f);
        cout << w << endl;

        Word.erase(0, f + 1);
    }
    
    if (Word != " ")
    {
        cout << Word << endl;
    }
}

int main()
{
    string Word = Mystd::ReadString();

    cout << "Your string word are: " << endl;
    PrintEachWordInString(Word);
    system("pause>0");  

    return 0;
}