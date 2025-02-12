#include <iostream>
using namespace std;


float ModOfNaumber(int number){
    float x;
    x = number % 2;
    return x;
}

string IsEvne(float number){
    string IS;
    if (number == 0)
    {
        return IS = "Even";
    }else{
        return IS = "ODD";
    }
}


int main(){

int number;
float Resolt;

cout << "Please enter your number " << endl;
cin >> number;

Resolt = ModOfNaumber(number);
cout << "The number you enter is " << IsEvne(Resolt);

    return 0;
}