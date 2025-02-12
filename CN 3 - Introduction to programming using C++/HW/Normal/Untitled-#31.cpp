#include <iostream>
#include <string>
using namespace std;


int main(){


string string1, string2, string3;
int N1;

cout << "Please enter strin1" << endl;
getline(cin, string1);

cout << "Please enter strin2" << endl;
getline(cin, string2) ;

cout << "Please enter strin3" << endl;
getline(cin, string3) ;

cout << "**********************************************" << endl;
cout << "The lenght of string1 is " << string1.length() << endl;
cout << "Sharacterts to 0,2,4,7 are: " << string1[0] << "," << string1[2]<< "," << string1[4]<< "," << string1[7] << endl; 
cout << "concatenating strin2 and string3 = " << string2 + string3 << endl;
N1 = stoi(string2) * stoi(string3);
cout << N1;

}



 