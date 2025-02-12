#include <iostream>
using namespace std;



int main()
{

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    cout << "\n\nAddresses are: ";

    cout << ptr << " ";
    cout << ptr + 1 << " ";
    cout << ptr + 2 << " ";
    cout << ptr + 3 << " ";
    cout << ptr + 4 << " ";

    cout << "\nvalues are: \n";
    
    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;
    cout << *(ptr + 3) << endl;
    cout << *(ptr + 4) << endl;


}