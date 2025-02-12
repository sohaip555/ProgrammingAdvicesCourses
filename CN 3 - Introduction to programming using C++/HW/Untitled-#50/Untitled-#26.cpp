#include <iostream>
using namespace std;


void PreintNumberTo(int n){

    int i;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}

int main(){

    int n;
    cout << "Please enter number: ";
    cin >> n;

    PreintNumberTo(n);

    return 0;
}