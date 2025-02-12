#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

float AreaOfRectangule(float width, float length)
{
    return width * length;
}

void PrintResult(string Message, float Result)
{
    cout << Message << Result ;
}

 int main(){

    float width;
    float length;
    float Result;  

    width = ReadPositiveNumber("please enter width of the rectangular");
    length = ReadPositiveNumber("please enter length of the rectangular");
    Result = AreaOfRectangule(width, length);
    PrintResult("the Area of rectangle is: ", Result);

    return 0;
}
