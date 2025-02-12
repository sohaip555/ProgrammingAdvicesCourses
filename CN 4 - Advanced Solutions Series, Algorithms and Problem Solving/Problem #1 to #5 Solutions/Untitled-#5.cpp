#include <iostream>
using namespace std;

struct  stInfo
{
    int Age;
    bool HasDriveLicense;
    bool HasRecommendation;
};

stInfo ReadInfo(){
    stInfo Info;

    cout << "Please enter ypur Age?" << endl;
    cin >> Info.Age;

    cout << "Do you have Driving license?" << endl;
    cin >> Info.HasDriveLicense;

    cout << "Do you have Recommendation?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stInfo Info){

    if (Info.HasRecommendation)
    {
        return true;
    }else
    {
    return (Info.Age > 21 && Info.HasDriveLicense == 1);
    } 
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