#include <iostream>
#include <string>
using namespace std;

char InvertCharacterCase(char Latter)
{
    if (isupper(Latter))
    {
        return tolower(Latter);
    }
    else if (islower(Latter))
    {
        return toupper(Latter);
    }
    return Latter;
}

void InvertAllStringLatterCase(string &Word)
{

    for (int i = 0; i < Word.length(); i++)
    {
        Word[i] = InvertCharacterCase(Word[i]);
    }
}

int main()
{
    string Word;

    cout << "Pleas eneter your string: ";
    // getline(cin, Word);
    Word = "My Name Is Sohaip Abu-GHrara, I LoVe PrOgramming";

    InvertAllStringLatterCase(Word);

    cout << "\n" << Word;
    system("pause>0");  

    return 0;
}