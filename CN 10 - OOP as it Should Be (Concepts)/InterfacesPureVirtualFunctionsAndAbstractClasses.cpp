#include <iostream>
using namespace std; 
//Abstract Class / Interface / Contract.


class clsMobile
{ 

    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string Text) = 0; 
    virtual void TakePicture() = 0; 

    friend class clsIPhone;
};

class clsIPhone
{

public:

    void Dial(string PhoneNumber)
    {

    };

    void SendSMS(string Text)
    {

    };

    void TakePicture()     
    {

         
    };
};


int main()
{
    clsIPhone iPhone;

    iPhone.TakePicture();


}