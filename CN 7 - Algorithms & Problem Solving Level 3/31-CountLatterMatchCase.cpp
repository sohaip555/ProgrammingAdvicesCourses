#include <iostream>
#include <string>
using namespace std;

string ReadString()
{
    string S;
    
    cout << "Please enter your string: ";
    getline(cin, S);

    return S;
}

char ReadChar()
{
    char S;
    
    cout << "Please enter your Charactar: ";
    cin >> S;

    return S;
}

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

int CountLatter(string Word, char Latter, bool MatchCase = true)
{
    int counter = 0;
    for (int i = 0; i < Word.length(); i++)
    {
        if (MatchCase)
        {
            Latter == Word[i] ? counter++ : counter;
        }
        else if (!MatchCase)
        {
            tolower(Latter) == tolower(Word[i]) ? counter++ : counter; 
        }
        
    }
    return counter;
}

int main()
{
    string Word;
    char Latter;

    Word = ReadString();
    Latter = ReadChar();

    cout << "\nLatter '" << Latter << "' count = " << CountLatter(Word, Latter) << endl;
    cout << "\nLatter '" << Latter << "' or '" << InvertCharacterCase(Latter) << "' count = " << CountLatter(Word, Latter, false) << endl;

    system("pause>0");  

    return 0;
}