#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

string UpperAllString(string Word)
{

    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = toupper(Word[i]);
    }
    return Word;
}

string ReplaceWords(string S, string ToReplace, string ReplaceTo, bool MatchCase = true)
{
    int x;

    if (MatchCase)
    {
        while ((x = S.find(ToReplace)) != std::string::npos)
        {
        
            S.erase(x, ToReplace.length());
            S.insert(x, ReplaceTo);
        }
    }
    else
    {
        string WordUp = UpperAllString(S);
        ToReplace = UpperAllString(ToReplace);
        bool n = (x = WordUp.find(ToReplace)) != std::string::npos;
        while (n = x != std::string::npos)
        {
        
            S.erase(x, ToReplace.length());
            S.insert(x, ReplaceTo);
            WordUp.erase(x, ToReplace.length());
            WordUp.insert(x, ReplaceTo);

            x = WordUp.find(ToReplace);
        }
    }

    return S;    
}

int main()
{
    string S = Mystd::ReadString();
    cout << "\n\nOrigial string: \n";
    cout << S << endl;

    cout << "ٌ\n\nReplace with watch case: \n";
    cout << ReplaceWords(S, "Sohaip", "Ahmed") << endl;

    cout << "\n\nReplace with donot watch case: \n";
    cout << ReplaceWords(S, "Sohaip", "Ahmed", false) << endl;

    return 0;
}