#include <iostream>
using namespace std;

struct stInfo
{
    string FirstNAme, LastName;
};

stInfo ReadFullName(){

    stInfo Info;
    cout << "Please enter your first name? " << endl;
    cin >> Info.FirstNAme;

    cout << "Please enter your last name? " << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullNAme(stInfo Infu){

    string FullNAme;
    FullNAme = Infu.FirstNAme + " " + Infu.LastName;

    return FullNAme;
}

void PrtintFullName(string FullNAme){
    cout << "Your name is " << FullNAme;
}

int main(){

    stInfo Info;
    PrtintFullName(GetFullNAme(ReadFullName()));

    return 0;
}