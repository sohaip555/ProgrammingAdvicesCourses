#include <iostream>
using namespace std;


void PreintNumber(int n){

        for(int i; i <= n; i++){
        cout << i << endl;
    }

}


int main(){

    int n;
    cout << "Please enter number: " << endl;
    cin >> n;

    PreintNumber(n);

    return 0;
}