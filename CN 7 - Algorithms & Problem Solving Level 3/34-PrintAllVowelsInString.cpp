#include <iostream>
#include <string>
#include <vector>
using namespace std;

string ReadString()
{
    string S;
    
    cout << "\nPlease enter your string: ";
    getline(cin, S);

    return S;
}

char ReadChar()
{
    char S;
    
    cout << "\nPlease enter your Charactar: ";
    cin >> S;

    return S;
}

bool IsVowel(char Latter)
{
    vector <char> vowels = {'a', 'e', 'i', 'o', 'u'};
    Latter = tolower(Latter);

    for(char &L : vowels)
    {
        if (L == Latter)
        {
            return true;
        }
    }
    return false;
}

void PrintVowelLatter(string word)
{
    int counter = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (IsVowel(word[i]))
            cout << word[i] << "   "; 
    }
}

int main()
{
    string Word = ReadString();

    cout << "Vowels in string are: ";
    PrintVowelLatter(Word);
    system("pause>0");  

    return 0;
}