#include <iostream>
#include <cmath>
using namespace std;

//1 عرف متغير بأسم (width) 
//2 عرف متغير بأسم النتائج 
//3 اطلب من المستخدم أدخال عرض الضلع 
//4 قم بعمل ثابت و سميه باي قيمتة 3.14
//5 قم بوضع المعطيات في القانون التالي ((pI * width * width) / 4)
//6 أعرض النتائج


int main(){

const float PI = 3.14;

float width;
float Result;
cout << "please enter width of the circle " << endl;
cin >> width;

Result = (PI * pow(width, 2)) / 4 ;

cout << "The Diameter of the circle is " << ceil(Result);

  return 0;
}