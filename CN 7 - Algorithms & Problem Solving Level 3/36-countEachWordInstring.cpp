#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

int CountEachWordInString(string Word)
{
    int counter = 0;
    int f;
    while ((f = Word.find(" ")) != Word.npos)
    {
        counter ++;

        Word.erase(0, f + 1);
    }
    
    if (Word != " ")
    {
        counter ++;
    }
    
    return counter;
}

int main()
{
    string Word = Mystd::ReadString();

    cout << "The number of word in your string is: " << CountEachWordInString(Word) << endl;
    
    system("pause>0");  

    return 0;
}