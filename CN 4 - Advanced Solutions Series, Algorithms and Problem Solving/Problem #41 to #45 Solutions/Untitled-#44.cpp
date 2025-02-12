#include <iostream>
using namespace std;

enum enWeek{Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int ReadNumberInrRange(string Message, int From, int To)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < From || number > To);
    
    return number;
}

void PrintDayOfWeek()
{
    cout << "1-Sunday" << endl;
    cout << "2-Monday" << endl;
    cout << "3-Tuesday" << endl;
    cout << "4-Wednesday" << endl;
    cout << "5-Thursday" << endl;
    cout << "6-Friday" << endl;
    cout << "7-Saturday" << endl;
}

enWeek ReadDayOfWeek()
{
    return (enWeek) ReadNumberInrRange("Please enter the number of day: ", 1, 7);
}

string GetDayOfWeek(enWeek Day)
{
    switch (Day)
    {
    case  enWeek::Sunday :
        return "Sunday" ;

    case  enWeek::Monday :
        return "Monday" ;

    case  enWeek::Tuesday :
        return "Tuesday" ;

    case  enWeek::Wednesday:
        return "Wednesday" ;

    case  enWeek::Thursday :
        return "Thursday" ;

    case  enWeek::Friday :
        return "Friday" ;

    case  enWeek::Saturday :
        return "Saturday" ;
    default:
        return "Not a week day! \n";
    }
}

int main(){

    enWeek day;

    PrintDayOfWeek();
    day = ReadDayOfWeek();
    cout << GetDayOfWeek(day);

}