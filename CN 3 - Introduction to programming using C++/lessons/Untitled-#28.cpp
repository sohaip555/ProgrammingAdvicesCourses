#include <iostream>
using namespace std;

enum enColor{Red, Yellow, Black, Blue};
enum entDirection{North, South, East, west};
enum enWeek{Son, Mon, Tue, Wen, Thu, Fri};
enum enGendor{Male, Female};
enum enStatus{Single, Married};

struct stInfo
{
    enColor Color;
    entDirection Diretion;
    enWeek Week;
    enGendor Gonder;
    enStatus Status;
};


int main(){

stInfo Info;

Info.Color = enColor::Blue;
Info.Diretion = entDirection::west ;
Info.Gonder = enGendor::Male ;
Info.Status = enStatus::Married ;
Info.Week = enWeek::Thu ;
cout << "My color is " << Info.Color << endl;



    return 0;
}
