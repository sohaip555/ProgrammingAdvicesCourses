#include <iostream> 
using namespace std;


struct Data
{
    float width;// عرض مستطيل
    float length;// طول مستطيل
    float AreaOfRectangule; 
    float Resolt;// مساحة المستطيل

};


float AreaOfRectangule(float width, float length)
{
    return width * length;
}


int main(){

Data Data1;

Data1.Resolt;
Data1.width;
Data1.length;
Data1.AreaOfRectangule;
 
cout << "please enter width of the rectangula\n";
cin >> Data1.width;

cout << "please enter length of the rectangula\n";
cin >> Data1.length;


Data1.Resolt = AreaOfRectangule(Data1.width, Data1.length);
cout << "the Area of rectangle is: " << Data1.Resolt ;


    return 0;
}