#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

vector <string> SplitString(string &Word, string Delim)
{

    vector <string> Words;
    int counter = 0;
    int f;
    while ((f = Word.find(Delim)) != std::string::npos)
    {
        Words.push_back(Word.substr(0, f));
        counter ++;

        Word.erase(0, f + Delim.length());
    }
    
    if (Word != " ")
    {
        Words.push_back(Word.substr(0, f));
    }
    
    return Words;
}

int main()
{
    vector <string> Words;
    string Word ;
    Word = "My Name Is Sohaip Abu-GHrara, I LoVe PrOgramming";
    Word = "Sohaip,Mohammed,Ahmed,Ali,Mostafa";

    Words = SplitString(Word, ",");

    cout << "Tokens = " << Words.size() << endl;
    for(string &Tokens : Words)
    {
        cout << Tokens << endl;
    }
    
    system("pause>0");  

    return 0;
}