#include <iostream>
#include <string>
#include <vector>
#include "..\My_Library\Mystd.h"
using namespace std;

struct stDate
{
    int Year;
    int Month;
    int Day;
};

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

stDate StringToDate(string StringDate)
{
    stDate Date;

    for (int i = 0; i < 14; i++)
    {
        if (StringDate[i] == '/')
        {
            Date.Day = stoi(StringDate.substr(0, i));
            StringDate = StringDate.erase(0, i + 1);
            break;
        }
        
    }

    for (int i = 0; i < 14; i++)
    {
        if (StringDate[i] == '/')
        {
            Date.Month = stoi(StringDate.substr(0, i));
            StringDate = StringDate.erase(0, i + 1);
            break;
        }
        
    }

    Date.Year = stoi(StringDate.substr(0, 4));
    
    return Date;
} 

string DateToString(stDate Date)
{
    string StringDate = "";

    StringDate = StringDate + to_string(Date.Day) + "/";
    StringDate = StringDate + to_string(Date.Month) + "/";
    StringDate = StringDate + to_string(Date.Year);

    return StringDate;
}

string ReadStringDate(string Message) 
{ 
    string DateString;  

    cout <<Message;     
    getline(cin >> ws, DateString);

    return DateString;
}

int main() 
{ 
    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? "); 
    
    stDate Date = StringToDate(DateString); 

    cout <<"\nDay:"<< Date.Day << endl;     
    cout <<"Month:"<< Date.Month << endl;     
    cout <<"Year:"<< Date.Year << endl;    
     
    cout <<"\nYou Entered: "<< DateToString(Date) <<"\n"; 

    system("pause>0"); 
    return 0; 


} 