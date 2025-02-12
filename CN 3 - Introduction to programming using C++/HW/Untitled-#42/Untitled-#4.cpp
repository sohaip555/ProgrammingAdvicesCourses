#include <iostream>
using namespace std;


int main(){

    int Age;
    string DriveLicense;

    cout << "Please enter ypur Age" << endl;
    cin >> Age;

    cout << "Do you have Driving license yes/no" << endl;
    cin >> DriveLicense;

    if (Age > 21 && DriveLicense == "yes")
    {
        cout << "you are hired";
    }
    else
    {
        cout << "You are rejected";
    }
     
}