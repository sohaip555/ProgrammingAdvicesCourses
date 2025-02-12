#include <iostream>
using namespace std;

struct  stInfo
{
    int Age;
    bool HasDriveLicense;
};

stInfo ReadInfo(){
    stInfo Info;
    cout << "Please enter ypur Age?" << endl;
    cin >> Info.Age;

    cout << "Do you have Driving license?" << endl;
    cin >> Info.HasDriveLicense;

    return Info;
}

bool IsAccepted(stInfo Info){
    return (Info.Age > 21 && Info.HasDriveLicense == 1);
}

void PrintResult(stInfo Info){
    
    if (IsAccepted(Info) == 1)
    {
        cout << "You are hired";
    }else
    {
        cout << "You are rejected";
    }
}

int main(){

    stInfo Info;

    PrintResult(ReadInfo());

    return 0;
}