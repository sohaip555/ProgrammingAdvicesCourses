#include <iostream>
using namespace std;

void LowerFiestlatterInEachWord(string &Word)
{
    bool IsFirstLatter = true;

    for (int i = 0; i < Word.length(); i++)
    {
        if (Word.at(i) != ' ' && IsFirstLatter)
        {
            Word[i] = tolower(Word[i]);
        }

        IsFirstLatter = (Word[i] == ' '? true : false);
    }
}

int main()
{
    string Word;

    // cout << "Pleas eneter your string: ";
    // cin >> Word;
    Word = "My Name Is Sohaip Abu-GHrara, I LoVe PrOgramming";

    LowerFiestlatterInEachWord(Word);

    cout << "\n" << Word;
    system("pause>0");  


    

}