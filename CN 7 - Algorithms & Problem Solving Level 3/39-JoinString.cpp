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

int main()
{
    vector <string> Words = {"Ahmed", "Mohammed", "Fade", "Rabei"};
    string Word ;
    
    cout << "\nVector after join:" << endl;
    cout << JoinString(Words, " ### ") << endl;
    system("pause>0");  

    return 0;
}