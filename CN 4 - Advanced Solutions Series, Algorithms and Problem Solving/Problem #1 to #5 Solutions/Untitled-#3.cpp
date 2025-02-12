#include <iostream>
using namespace std;

enum enNuberType { odd= 1, even = 2};

int ReadNumber(){
    int number;
    cout << "Please enter number ?" << endl;
    cin >> number;

    return number;
}

enNuberType CheckNumberType(int number){

    int Result = number % 2;
    if ( Result == 0)
    {
        return even;
    }else
    {
        return odd;
    }
}

void PrintNumberTtpe(enNuberType type){

    if (type == enNuberType::even)
    {
        cout << "The number is Even";
    }else
    {
        cout << "The number is Odd";
    }
    
    
}

int main(){

    PrintNumberTtpe(CheckNumberType(ReadNumber()));
    return 0;
}