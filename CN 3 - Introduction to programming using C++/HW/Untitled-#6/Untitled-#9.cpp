#include <iostream>
using namespace std ;

//1 اطلب من المستخد ادخال 3 ارقام 
//2 قم بعمل متغير وقم بوضع مجموع الاعداد الثلاث بدالخلة
//3 اطبع المتغير 

int main(){

float num1 , num2, num3, sum;
cout << "please enter your numbers\n" ;
cin >> num1;
cin >> num2;
cin >> num3;

sum = num1 + num2 + num3;
cout << sum;


    return 0;

}


