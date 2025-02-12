#include <iostream>
using namespace std;


void ReadArrayData(int Arr[100], int &Length)
{
    cout << "How many number you wont enter? 1 to 100" << endl;
    cin >> Length;

    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Please enter number " << i + 1 << ": ";
        cin >> Arr[i];
    }
}

void PrintArrayData(int Arr[100], int& Length)
{
    for (int i = 0; i <= Length - 1; i++)
    {
        cout << "Number [" << i + 1 << "]: " << Arr[i] << endl;
    }
}

int ColculatArraySum(int Arr[100], int &Length)
{
    int sum = 0;
    for(int i = 0; i <= Length - 1; i++){
        
        sum = sum + Arr[i];
    }
    return sum;
}

float ColculatArrAverage(int Arr[100], int Length)
{
    return (float)ColculatArraySum(Arr, Length) / Length;
}

int main(){

    int Arr[100], Length;
    ReadArrayData(Arr, Length);
    PrintArrayData(Arr, Length);
    cout << "Sum = " << ColculatArraySum(Arr, Length) << endl;
    cout << "Averagr = " << ColculatArrAverage(Arr, Length); 

}