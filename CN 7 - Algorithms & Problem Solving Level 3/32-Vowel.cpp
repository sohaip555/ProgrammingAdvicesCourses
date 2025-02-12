#include <iostream>
#include <string>
#include <vector>
using namespace std;


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

bool IsVowel(char Latter)
{
    vector <char> Latters = {'a', 'e', 'i', 'o', 'u'};
    Latter = tolower(Latter);

    for(char &L : Latters)
    {
        if (Latter == L)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char Latter = ReadChar();

    if (IsVowel(Latter))
        cout << "\nLatter \'" << Latter << "\' is vowel\n"; 
    else
        cout << "\nLatter \'" << Latter << "\' is not vowel\n"; 
    
    
    system("pause>0");  

    return 0;
}