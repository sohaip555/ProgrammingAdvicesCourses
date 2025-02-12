#include <iostream>
#include <string>
using namespace std;


int main(){

string str1 = "43.22", str2, str3;
int N1 = 20, N4;
double N2 = 33.5, N5;
float N3 = 55.23, N6;

N4 = stoi(str1);
N6 = stof(str1) ;
str2 = to_string(N2);
str3 = to_string(N3);
N5 = int(N3);
N5 = (int) N3;

cout << N5 << endl;
cout << N4 << endl;
cout << str2 << endl;
cout << str3 << endl;
cout << N5 << endl;
cout << N6 << endl;



}