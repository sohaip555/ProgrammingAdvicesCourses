#include <iostream>
using namespace std;


int main(){

    int TotalSales;

    cout << "Please enter your total sales a mount " << endl;
    cin >> TotalSales;

    if (TotalSales > 1000000)
    {
        cout << TotalSales * 0.01;
    }
    else if (TotalSales >= 500000 && TotalSales > 1000000)
    {
        cout << TotalSales * 0.02;
    }
    else if (TotalSales >= 100000 && TotalSales < 500000)
    {
        cout << TotalSales * 0.03;
    }
    else if (TotalSales >= 50000 && TotalSales < 100000)
    {
        cout << TotalSales * 0.05;
    }
    
    
    
    return 0;
}