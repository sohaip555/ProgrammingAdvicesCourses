#include <iostream>
#include <string>
using namespace std;

void LowerAllLetterInString(string &Word)
{
    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = tolower(Word[i]);
    }
}

void UpperAllLetterInString(string &Word)
{

    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = toupper(Word[i]);
    }
}

int main()
{
    string Word;

    // cout << "Pleas eneter your string: ";
    // getline(cin, Word);
    Word = "My Name Is Sohaip Abu-Ghrara, I Love Programming";

    LowerAllLetterInString(Word);
    cout << "\n" << Word;

    UpperAllLetterInString(Word);
    cout << "\n" << Word;
    system("pause>0");  


    

}