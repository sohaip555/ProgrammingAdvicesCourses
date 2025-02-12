#include <iostream> 
#include "../My_Library/Mystd.h"
using namespace std;


string NumberToText(int Number)
{
    if (Number == 0)
    {
        return "";
    }
    
    if (Number >= 1 && Number <= 19)
    {
        string Arr1[] = {"", "one", "Tow", "Three", "Four", "Five", "Six", "Seven", "Eghit", "Nine", "Ten",
        "Eleven", " Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eghiteen", "Ninteen"};

        return Arr1[Number];
    }
    
    if (Number >= 20 && Number <= 99)
    {
        string Arr2[] = {"", "", "Twenty", "Thirty", "Foty", "Fifty", "Sixty", "Seventy", "Eghity", "Ninty"};

        return Arr2[Number / 10] + " " + NumberToText(Number % 10);
    }
    
    if (Number >= 100 && Number <= 199)
    {
        return "One Hundred " + NumberToText(Number % 100);
    }

    if (Number >= 200 && Number <= 999)
    {
        return NumberToText(Number / 100) + " Hundred " + NumberToText(Number % 100);
    }
    
    if (Number >= 1000 && Number <= 1999)
    {
        return "One Thousand " + NumberToText(Number % 1000);
    }

    if (Number >= 2000 && Number <= 999999)
    {
        return NumberToText(Number / 1000) + " Thousand " + NumberToText(Number % 1000);
    }

    if (Number >= 1000000 && Number <= 999999999)
    {
        return NumberToText(Number / 1000000) + " Million " + NumberToText(Number % 1000000);
    }
    
    if (Number >= 1000000000 && Number <= 1999999999)
    {
        return NumberToText(Number / 1000000000) + " Billion " + NumberToText(Number % 1000000000);
    }
    
    return "ERROR";

    
}

int main()
{
    int Number = Mystd::ReadPositiveNumber("Please enter Number");

    cout << NumberToText(Number);

}