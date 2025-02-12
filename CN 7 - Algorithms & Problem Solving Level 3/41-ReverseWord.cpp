#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

vector <string> CountEachWordInString(string &Word, string Delim)
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

string ReverseWordInString(string S, char Delim = ' ')
{
    vector <string> Words;
    string x;

    for (int i = S.length() - 1; i > 0; i--)
    {

        if (S.at(i) != Delim && S.at(i - 1) == Delim)
        {
            x = S.substr(i, S.length());
            Words.push_back(x);
            S.erase(i, S.length());
        }
        else if (S.at(i) == Delim && S.at(i - 1) != Delim)
        {
            x = S.substr(i, S.length());
            Words.push_back(x);
            S.erase(i, S.length());            
        }

    }

    

    Words.push_back(S);
    S.erase(0, S.length());
    
    for(string &l: Words)
    {
        S = S + l;
    }

    return S;
    
}

int main()
{
    string S = Mystd::ReadString();

    cout << "String after reverse word" << endl;
    cout << ReverseWordInString(S) << endl;
    system("pause>0");  

    return 0;
}