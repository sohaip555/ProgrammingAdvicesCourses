#include <iostream>
using namespace std;


int ReadNumberInRenge(int From, int To){

    
    int number;
    cout << "Please enter number between " << From << " and " << To << endl;
    cin >> number;

    while (number < From || number > To)
    {
        cout << "\nWrong number" << endl;
        cout << "Please enter number between " << From << "and" << To;
        cin >> number;
    }
    return number;
}


int main(){

    int number;
    number = ReadNumberInRenge(1,100);
    cout << "\nThe Number you enter is: " << number ;  
    // cout << "while Loop" << endl;
    // int i = 1;
    // while (i <= 5)
    // {
    //     cout << i << endl;
    //     i++;
    // }


//     int i;
//     cout << "Please enter a positive number: ";
//     cin >> i;

//     while (i < 0)
//     {
//         cout << "\nWrong number, Please enter a positive number: ";
//         cin >> i;
//     }
//     cout << "\nThe number you enter is " << i << endl;

}