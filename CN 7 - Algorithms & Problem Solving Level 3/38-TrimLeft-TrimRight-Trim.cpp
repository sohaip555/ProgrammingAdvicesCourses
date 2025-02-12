#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

string TrimLift(string Word)
{

    for (int i = 0; i < Word.length(); i++)
    {
        if (Word[i] != ' ')
        {
            return Word.substr(i, Word.length() );
        }
    }
    return "";
}

string TrimRight(string Word)
{

    for (int i = Word.length() - 1; i > 0; i--)
    {
        if (Word[i] != ' ')
        {
            return Word.substr(0, i + 1);
        }
    }

    return "";
}

string Trim(string Word)
{

    Word = TrimLift(Word);
    Word = TrimRight(Word);

    return Word;
}

int main()
{
    string Word ;
    Word = "                      Sohaip Abu-GHrara";
    // Word = "         Sohaip,Mohammed,Ahmed,Ali,Mostafa                  ";

    cout << Word.substr(22, 38);
    cout << "\n\n";
    cout << "string      = "  << Word << endl;
    cout << "\n";
    cout << "Trim lift   = " << TrimLift(Word) << endl; 
    cout << "Trim right  = " << TrimRight(Word) << endl; 
    cout << "Trim        = " << Trim(Word) << endl; 
    
    system("pause>0");  

    return 0;
}