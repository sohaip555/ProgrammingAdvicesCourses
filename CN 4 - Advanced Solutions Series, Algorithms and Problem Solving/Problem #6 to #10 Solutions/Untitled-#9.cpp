#include <iostream>
using namespace std;

struct stNumber{ 
    int Number1, Number2, Number3;
};

stNumber ReadNumber(){
    stNumber Number;
    cout << "Please enter number1? " << endl;
    cin >> Number.Number1;

    cout << "Please enter number2? " << endl;
    cin >> Number.Number2;

    cout << "Please enter number3? " << endl;
    cin >> Number.Number3;
    
    return Number;
}

float SumOfNumbers(stNumber Number){
    return Number.Number1 + Number.Number2 + Number.Number3;
}

void PrintResult(stNumber Number){
    cout << SumOfNumbers(Number);
}

int main(){

    PrintResult(ReadNumber());
    return 0;
}