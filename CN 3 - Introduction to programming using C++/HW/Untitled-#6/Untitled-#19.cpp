#include <iostream>
#include <Cmath>
using namespace std;

//1 عرف متغير بأسم (Diameter) 
//2 عرف متغير بأسم النتائج 
//3 اطلب من المستخدم أدخال قطر الدائرة
//4 قم بعمل ثابت و سميه باي قيمتة 3.14
//5 قم بوضع المعطيات في القانون التالي ((pI * D) / 4)
//6 أعرض النتائج



int main(){

const float PI = 3.14;

float Diameter, Result;

cout << "please enter Diameter of the circle " << endl;
cin >> Diameter;

Result = (PI * pow(Diameter, 2)) / 4 ;

cout << "The Diameter of the circle is " << Result;

  return 0;
}