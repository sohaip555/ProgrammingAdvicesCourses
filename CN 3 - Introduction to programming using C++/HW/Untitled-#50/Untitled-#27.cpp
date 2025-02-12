#include <iostream>
using namespace std;

void PrintNumber(int n){
    
    int i = 0;
    while (i < n)
    {
        cout << n-- << endl;
    }

}

int main(){

    int n;
    cout << "Please enter number: ";
    cin >> n;

    PrintNumber(n);

    return 0;
}