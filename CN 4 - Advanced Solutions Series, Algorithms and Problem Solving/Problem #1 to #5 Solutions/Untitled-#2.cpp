#include <iostream>
#include<string>
using namespace std;


string Readname(){

    string name;
    cout << "Please enter your name " << endl;
    getline(cin, name);

    return name;
}

void PrintName(string name){
    cout << "your name is " << name << endl;
}


int main(){

    PrintName(Readname());

}