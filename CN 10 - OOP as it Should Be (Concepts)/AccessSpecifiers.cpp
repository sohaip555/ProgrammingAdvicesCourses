#include <iostream>
using namespace std;


class clsPerson
{

private:

    int Varbul1;

    int Fun1()
    {
        return 20;
    }

protected:

    int Varbul2;
    int Fun2()
    {
        return 15;
    }

public:

    string FirstName;  
    string LastName;  

    string FullName()
    {
        return FirstName + " " + LastName;
    }

    int Fun3()
    {
        return Fun1() * Varbul1 * Varbul2;
    }


};


int main()
{

    clsPerson Person1;

    Person1.FirstName = "Sohaip";
    Person1.LastName = "Abu-ghrara";

    cout << Person1.FullName();


}