#include <iostream>
using namespace std;


int main(){

    int Arr[10];
    Arr[0] = 10, Arr[1] = 20, Arr[2] = 55, Arr[3] = 45, Arr[4] = 71, Arr[5] = 84, Arr[6] = 77, Arr[7] = 33, Arr[8] = 90, Arr[9] = 100;

    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] == 71)
        {
            cout << "The value you want in index" << i;
            break;
        }
        
    }
         

}