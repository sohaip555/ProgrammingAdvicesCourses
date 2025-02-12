#include <iostream>
using namespace std;

struct stMark{ 
    int Mark1, Mark2, Mark3;
};

stMark ReadMark(){
    stMark Mark;
    cout << "Please enter Mark1? " << endl;
    cin >> Mark.Mark1;

    cout << "Please enter Mark2? " << endl;
    cin >> Mark.Mark2;

    cout << "Please enter Mark3? " << endl;
    cin >> Mark.Mark3;
    
    return Mark;
}

float SumOfMarks(stMark Mark){
    return Mark.Mark1 + Mark.Mark2 + Mark.Mark3;
}

float AvaregeOfMark(){

    return SumOfMarks(ReadMark()) / 3;
}

void PrintResult(){
    cout << AvaregeOfMark();
}

int main(){

    PrintResult();
    return 0;
}