#include <iostream>
#include <string>
using namespace std;


int CountLatter(string Word, char Latter)
{
    int counter = 0;
    for (int i = 0; i < Word.length(); i++)
    {
        Latter == Word[i] ? counter++ : counter;
    }
    return counter;
}


int main()
{
    string Word;
    char Latter;
    cout << "Pleas eneter your string: ";
    getline(cin, Word);

    cout << "Please enter a Character: ";
    cin >> Latter;
    
    cout << "\nLatter '" << Latter << "' count = " << CountLatter(Word, Latter);
    system("pause>0");  

    return 0;
}