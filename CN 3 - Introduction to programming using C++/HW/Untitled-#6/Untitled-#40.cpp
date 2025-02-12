#include <iostream>
using namespace std;


//اصنع متغير لي المجموع 
//اطلب من المستخدم ادخال كيمة الفاتورة وضعها في المجموع
//اوجد قيمة 10% من الفاتورة ثم اضفها لي المجموع
//اوجد قيمة 16% من الفاتورة ثم اضفها لي المجموع
//ثم اطبع المجموع

int main(){

float Total ;
cout << "Please enter your Bill" <<endl;
cin >> Total;

Total = Total * 1.1 ;
Total = Total * 1.16;

cout << "The total is " << Total;

}