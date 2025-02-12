#include <iostream>
#include <string>
using namespace std;

float ReadNumber(){
    float number;
    cout << "Please enter number? " << endl;
    cin >> number;

    return number;
}

float CalculateHalfNumber(float number){
    return number / 2;
}

void PrintResult(float number){
    string Result = "Half of " + to_string(number) + " is " + to_string(CalculateHalfNumber(number)); 
    cout << Result;
}

int main(){

    PrintResult(ReadNumber());


    return 0;
}