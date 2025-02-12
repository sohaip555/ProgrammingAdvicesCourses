#include <iostream>
using namespace std;


class clsAddress
{

public:

    clsAddress()
    {

    }

    ~clsAddress()
    {
        cout << "Hello i am Destructors" << endl;
    }
};

void Fun()
{
    clsAddress Adderss1;

}


int main()
{

    Fun();
    system("pause>0");
}