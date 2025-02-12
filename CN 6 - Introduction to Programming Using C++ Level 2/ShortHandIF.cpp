#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main()
{

    int Number;
    std::cout << "Please enter a number?" << endl;   
    cin >> Number;

   while (cin.fail())     
    { 
        cin.clear();      
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');          
        cout << "Invalid Number, Enter a valid one:" << endl;         
        cin >> Number;   
    } 

    (Number > 0) ? cout << "The number is positive" : cout << "The number is Negative";

}