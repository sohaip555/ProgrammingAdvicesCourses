#include <iostream>
using namespace std;

void PrintNumber(int n){
    
    for(int i = 0; i <= n; i++){
        cout << n - i << endl;
    }

}

int main(){

    int n;
    cout << "Please enter number: " << endl;
    cin >> n;

    PrintNumber(n);
    
    return 0;
}