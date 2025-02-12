#include <iostream>
using namespace std ;

//قم بعمل متغير لي قيمة الفاتورة و القيمة المستلمة و القيمة التي ستوعيدها ان وجدت
//أطلب من المستخدم إدخال القيمة المستلمة
//قم بتنقيص الفاتورة من القيمة المستلمة إذا كان العاإد موجب تقوم بإرجاعة للعميل 
//قم بطباعة الناتج


int main(){

string str1, str2;
short Cashpaid ,Bill;

cout << "Please enter your Bill" << endl;
cin >> str1; 

cout << "Please enter your Cashpaid" << endl;
cin >> str2;

Bill = stoi(str1);
Cashpaid = stoi(str2);

cout << "The remainder is " << Cashpaid - Bill;

}