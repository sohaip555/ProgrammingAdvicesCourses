#include <iostream>
using namespace std;

void ReadArrayData(float x[3]){

    cout << "Please enter grode1" << endl;
    cin >> x[0];

    cout << "Please enter grode2" << endl;
    cin >> x[1];

    cout << "Please enter grode3" << endl;
    cin >> x[2];
}

float Avrage(float x[3]){

    return (x[0] + x[1] + x[2]) / 3;
}

int main(){

    float Grade[3], Avg;

    ReadArrayData(Grade);
    Avg = Avrage(Grade);
    cout << "The averoge of grades is: " << Avg;

    return 0;
}