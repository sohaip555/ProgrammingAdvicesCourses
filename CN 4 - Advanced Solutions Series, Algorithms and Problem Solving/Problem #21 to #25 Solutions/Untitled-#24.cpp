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

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))   
        cout << Age << " is Valid Age";
    else 
        cout << Age << " is Invalid Age";

}


int main(){

    int Age;

    Age = ReadPositiveNumber("Please enter your age");
    PrintResult(Age);

    return 0;
}