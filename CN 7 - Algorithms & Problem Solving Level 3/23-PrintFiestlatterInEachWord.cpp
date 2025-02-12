#include <iostream>
using namespace std;

void PrintFiestlatterInEachWord(string &Word)
{

    bool IsFirstLatter = true;
    
    for (int i = 0; i < Word.length(); i++)
    {
        if (Word.at(i) != ' ' && IsFirstLatter)
        {
            cout << Word[i] << endl;
        }

        IsFirstLatter = (Word[i] == ' '? true : false);
        
    }
}

int main()
{
    string Word;

    // cout << "Pleas eneter your string: ";
    // cin >> Word;
    
    Word = " My name is sohaip Abu-Ghrara, I love Programming";

    PrintFiestlatterInEachWord(Word);
    system("pause>0");    
    

}