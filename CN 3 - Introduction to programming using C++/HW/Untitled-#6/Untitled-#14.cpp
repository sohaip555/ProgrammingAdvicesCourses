#include <iostream>
using namespace std;


// برنامج ليقوم بقلب القيم في المتغيرات

int main(){

  float number1 ;
  float number2 ;
  float temb ;

  cout <<"please enter your numbers\n";
  cin >> number1 ;
  cin >> number2 ;

  cout << number1 << endl;
  cout << number2 << endl;

  // نقوم بأستعمال نتغير Temb لنقل القيم اليه
  temb = number1 ;
  number1 = number2 ;
  number2 = temb;
  cout << "after the swap" << endl;

  cout << number1 << endl;
  cout << number2 << endl;



  return 0;
}
