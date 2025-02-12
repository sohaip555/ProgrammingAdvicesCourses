#include <iostream>
#include <string>
using namespace std;


int CountCabitalLatter(string Word)
{
    int counter = 0;
    for (int i = 0; i < Word.length(); i++)
    {
        isupper(Word[i]) ? counter++ : counter;
    }
    return counter;
}

int CountSmallLatter(string Word)
{
    int counter = 0;
    for (int i = 0; i < Word.length(); i++)
    {
        islower(Word[i]) ? counter++ : counter;
    }
    return counter;
}

int main()
{
    string Word;

    // cout << "Pleas eneter your string: ";
    // getline(cin, Word);
    Word = "My Name Is Sohaip Abu-GHrara, I am PrOgramming";

    cout << "\nString Length = " << Word.length();
    cout << "\nCabital Latter count = " << CountCabitalLatter(Word);
    cout << "\nSmall Latter count = " << CountSmallLatter(Word);

    cout << "\n" << Word;
    system("pause>0");  

    return 0;
}