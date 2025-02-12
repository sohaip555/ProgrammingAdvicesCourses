#include <iostream>
using namespace std;


class clsPerson
{


public:

    string FirstName;  
    string LastName;  

    string FullName()
    {
        return FirstName + " " + LastName;
    }


};


int main()
{

    clsPerson Person1;

    Person1.FirstName = "Sohaip";
    Person1.LastName = "Abu-ghrara";

    cout << Person1.FullName();


}