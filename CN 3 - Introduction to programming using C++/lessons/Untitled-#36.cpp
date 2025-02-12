#include <iostream>
using namespace std;

int x = 2000;



void MyFunction(){
    int x = 400;

    cout << "The value of x in my function is: " << x << endl;
}

int main(){

int x = 30;

cout << "The value inside main function is: " << x << endl;
MyFunction();

::x += 466;
cout << "The golobal value of x plus 1 is: " << ::x << endl;




    return 0;
}