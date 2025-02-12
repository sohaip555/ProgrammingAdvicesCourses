#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    float number;
    do
    {
        cout << Message << endl;
        cin >> number;
    } while (number < 0);
    
    return number;
}

bool ValidateNumberInRange(int Age, int A, int B)
{
    return (Age >= A && Age <= B);
}

bool ReadUntilAgeBetween(int A, int B)
{
    int Age = 0;
    do
    {
        Age = ReadPositiveNumber("Please enter your age Between 18 and 45");
    } while (!ValidateNumberInRange(Age, A, B));
    return Age;
}

void PrintResult(int Age)
{
    if (ReadUntilAgeBetween(18, 45))   
        cout << Age << " is Valid Age";
    else 
        cout << Age << " is Invalid Age";
}

int main(){

    int Age;

    Age = ReadPositiveNumber("Please enter your age Between 18 and 45");
    PrintResult(Age);

    return 0;
}