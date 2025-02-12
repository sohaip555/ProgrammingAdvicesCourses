#include <iostream>
using namespace std;

int main(){

short Penny ;
short Nackel ;
short Dime ;
short Quarter ;
short Dollar ;

cout << "Please enter your numbers \n";
cin >> Penny;
cin >> Nackel;
cin >> Dime;
cin >> Quarter;
cin >> Dollar;

float Resolt = Penny + (Nackel * 5) + (Dime * 10) + (Quarter * 25) + (Dollar * 100);
cout << "Penny :" << Resolt << endl;
cout << "Dollar :" << Resolt / 100;





}