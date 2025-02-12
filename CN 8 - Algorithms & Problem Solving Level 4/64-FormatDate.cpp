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

string ReadStringDate(string Message) 
{ 
    string DateString;  

    cout <<Message;     
    getline(cin >> ws, DateString);

    return DateString;
}

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

stDate StringToDate(string DateString) 
{ 
    stDate Date; 
    vector <string> vDate; 

    vDate = SplitString(DateString, "/");     
    Date.Day = stoi(vDate[0]);     
    Date.Month = stoi(vDate[1]);     
    Date.Year = stoi(vDate[2]); 

    return Date; 
    
}

string ReplaceWords(string S, string ToReplace, string ReplaceTo)
{
    int x;
    while ((x = S.find(ToReplace)) != std::string::npos)
    {
        S.replace(x, ToReplace.length(), ReplaceTo);
    }
    return S;    
}

string FormatDate(stDate Date, string Forma = "dd/mm/yyyy")
{

    Forma = ReplaceWords(Forma, "yyyy", to_string(Date.Year));
    Forma = ReplaceWords(Forma, "mm", to_string(Date.Month));
    Forma = ReplaceWords(Forma, "dd", to_string(Date.Day));

    return Forma;
}

int main() 
{ 
    string DateString = ReadStringDate("\nPlease Enter Date dd/mm/yyyy? "); 
    
    stDate Date = StringToDate(DateString);
    
    cout << "\n" << FormatDate(Date, "yyyy-mm-dd") << endl;
    
    cout << "\n" << FormatDate(Date, "mm-dd-yyyy") << endl;

    cout << "\n" << FormatDate(Date, "mm/dd/yyyy") << endl;

    cout << "\n" << FormatDate(Date, "dd/yyyy/mm") << endl;

    cout << "\n" << FormatDate(Date, "dd-mm-yyyy") << endl;

    cout << "\n" << FormatDate(Date, "Day:dd, Month:mm, Year:yyyy") << endl;



    system("pause>0"); 
    return 0; 


} 