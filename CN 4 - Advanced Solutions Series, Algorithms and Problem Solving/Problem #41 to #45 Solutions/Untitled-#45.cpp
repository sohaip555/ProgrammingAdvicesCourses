#include <iostream>
using namespace std;

enum enMonthOfYear{January = 1, February, March, April, May, June, July, August, September, October, November, December};

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

void PrintMonthOfYear()
{
    cout << "1-January" << endl;
    cout << "2-February" << endl;
    cout << "3-March" << endl;
    cout << "4-April" << endl;
    cout << "5-May" << endl;
    cout << "6-June" << endl;
    cout << "7-July" << endl;
    cout << "8-August" << endl;
    cout << "9-September" << endl;
    cout << "10-October" << endl;
    cout << "11-November" << endl;
    cout << "12-December" << endl;

}

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear) ReadNumberInrRange("Please enter number the Month ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
    switch (Month)
    {
    case enMonthOfYear::January :
        return "January";
    
    case enMonthOfYear::February :
        return "February";

    case enMonthOfYear::March :
        return "March";

    case enMonthOfYear::April :
        return "April";

    case enMonthOfYear::May :
        return "May";

    case enMonthOfYear::June :
        return "June";

    case enMonthOfYear::July :
        return "July";

    case enMonthOfYear::August :
        return "August"; 

    case enMonthOfYear::September :
        return "September";

    case enMonthOfYear::October :
        return "October";

    case enMonthOfYear::November :
        return "November";

    case enMonthOfYear::December :
        return "December";
    default:
        return "Not a Month!";
    }
}


int main(){

    enMonthOfYear Month;

    PrintMonthOfYear();
    Month = ReadMonthOfYear();
    cout << GetMonthOfYear(Month);
    return 0;
}