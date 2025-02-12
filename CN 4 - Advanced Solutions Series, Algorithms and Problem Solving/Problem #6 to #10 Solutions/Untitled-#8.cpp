#include <iostream>
using namespace std;


enum enMark{PASS = 1, FAIL = 2};

float ReadeMark(){
    float Mark;
    cout << "Please enter your mark?" << endl;
    cin >> Mark;

    return Mark;
}

enMark ChackMark(float Mark){

    if (Mark >= 50)
    {
        return enMark::PASS;
    }else
    {
        return enMark::FAIL;
    }
}

void PrintResult(float Mark){

    if (ChackMark(Mark) == enMark::PASS)
        cout << "You passed";
    else
        cout << "You failed";    
}

int main(){

    PrintResult(ReadeMark());
    return 0;
}