#include <iostream>
#include <cmath>
using namespace std;


void MyFunction()
{

cout << "This is my first function" << endl;

}

string Myfunction2(){

  return   "This is my first returning value function, this is the value" ;
}

float intfunction()
{
float x = 10.7, y = 20.5;

return x * y;

}

int main(){

float x;

x = ceil(intfunction());

cout << x;

    return 0;
}