#include <iostream>
#include <string>
using namespace std;

void UpperFiestlatterInEachWord(string &Word)
{
    bool IsFirstLatter = true;

    for (int i = 0; i < Word.length(); i++)
    {
        if (Word.at(i) != ' ' && IsFirstLatter)
        {
            Word[i] = toupper(Word[i]);
        }

        IsFirstLatter = (Word[i] == ' '? true : false);
    }
}

int main()
{
    string Word;

    // cout << "Pleas eneter your string: ";
    // cin >> Word;
    Word = "\nMy name is sohaip abu-Ghrara, Iilove programming";

    UpperFiestlatterInEachWord(Word);

    cout << Word;
    system("pause>0");  


    

}