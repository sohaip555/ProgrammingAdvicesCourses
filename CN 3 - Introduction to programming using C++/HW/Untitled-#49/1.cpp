#include <iostream>
using namespace std;


void PrintCharacters(){

    for (int i = 65; i <= 90; i++)
    {
        cout << "Latter:" << char(i) <<  endl;
        for (int j = 65; j <= 90; j++)
        {
            cout << char(i) << char(j) << endl;
        }
        cout << "*********************\n";
    }
    
}

int main(){

PrintCharacters();


    
}