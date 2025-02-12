#include <iostream>
using namespace std;


int main(){

    int Arr[5], sum = 0;
    Arr[0] = 10, Arr[1] = 20, Arr[2] = 55, Arr[3] = 45, Arr[4] = 71;

    for (int i = 0; i < 5; i++)
    {
        if (Arr[i] <= 50)
        {
            sum = sum + Arr[i];
        }else{
            continue;
        }
    }

    cout << sum;
}