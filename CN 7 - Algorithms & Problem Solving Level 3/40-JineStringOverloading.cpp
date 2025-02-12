#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

string JoinString(vector <string> Words, string Delim)
{
    string Word = "";

    for(string &w: Words)
    {
        Word.append(w);
        Word.append(Delim);
    }

    return Word.substr(0, Word.length() - Delim.length());
}

string JoinString(string Words[5], int ArreyLenght, string Delim)
{
    string Word = "";

    for (int i = 0; i < ArreyLenght; i++)
    {
        Word = Word + Words[i] + Delim;
    }
    
    return Word.substr(0, Word.length() - Delim.length());
}

int main()
{
    vector <string> vWords = {"Ahmed", "Mohammed", "Fade", "Rabei", "Omar"};
    string Words[5] = {"Ahmed", "Mohammed", "Fade", "Rabei", "Omar"};
    string S;
    cout << "\nVector after join:" << endl;
    cout << JoinString(vWords," ") << endl;

    S = JoinString(Words, 5," ");
    cout << "\nArray after join:" << endl;
    cout << S << endl;
    system("pause>0");  

    return 0;
}