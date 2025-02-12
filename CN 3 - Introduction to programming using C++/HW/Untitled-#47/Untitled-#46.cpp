#include <iostream>
using namespace std;

void printCharacter(){

    int n = 90;
    for(int i = 65; i <= n; i++){
        cout << char(i) << endl;
    }

}

int main(){

    printCharacter();

    return 0;
}