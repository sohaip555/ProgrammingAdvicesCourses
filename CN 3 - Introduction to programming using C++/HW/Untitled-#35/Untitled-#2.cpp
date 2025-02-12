#include <iostream>
using namespace std;


void PrintMyName(string name){

    cout << "Your name is " << name << endl;
}


int main(){

string name;

cout << "Please enter your name" << endl;
cin >> name;

PrintMyName(name);
    return 0;
}