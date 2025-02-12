#include <iostream>
using namespace std;


void PrintCharacters(){

    for (int i = 0; i < 6; i++)
    {
        for (int j = 65; j <= 65 + i; j++)
        {
            cout << char(j);
     
        }
        cout << endl;
    }
    
}

int main(){

PrintCharacters();


}