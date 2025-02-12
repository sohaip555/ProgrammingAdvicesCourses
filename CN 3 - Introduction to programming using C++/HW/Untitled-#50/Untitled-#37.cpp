#include <iostream>
using namespace std;

int SumOfNumber(int i){

    int sum = 0; 
    while (i != -99)
    {
        sum = sum + i;
        cout << "to stop the brogram enter -99" << endl;
        cin >> i;
    }
    return sum;
 
}

int main(){

    int i;
    cout << "Please enter your numbers " << endl;
    cin >> i;
    cout << "Total of your number is: " << SumOfNumber(i);


    return 0;
}