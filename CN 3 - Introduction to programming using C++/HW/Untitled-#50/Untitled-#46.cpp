#include <iostream>
using namespace std;

void printCharacter(){

    int n = 90, i = 65;
    while (i <= n)
    {
        cout << char(i) << endl;
        i++;
    }

}

int main(){

    printCharacter();

    return 0;
}