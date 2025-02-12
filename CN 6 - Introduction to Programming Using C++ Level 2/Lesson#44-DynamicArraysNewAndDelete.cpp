#include <iostream>
using namespace std;



int main()
{
    int num;
    cout << "Please enter number of student: ";
    cin >> num;

    float *ptr;
    ptr = new float[num];

    cout << "Enter grades od students" << endl;

    for (int i = 0; i < num; i++)
    {
        cout << "stodent " << i + 1 << ": ";
        cin >> *(ptr + i);
    }
    
    for (int i = 0; i < num; i++)
    {
        cout << "stodent " << i + 1 << ": " << ptr[i] << endl;
    }
    
    delete [] ptr;

}