#include <iostream> 
using namespace std;


class clsPerson
{
public:

    virtual void Print()
    {
        cout << "Hi, i am Person" << endl;
    }
};

class clsEmployee : public clsPerson
{
public:

    void Print()
    {
        cout << "Hi, i am Employee" << endl;
    }
};


class clsStutend : public clsPerson
{

public:

    void Print()
    {
        cout << "Hi, i am Student" << endl;
    }    
};


int main()
{

    clsEmployee Employee1;
    clsStutend Student1;

    clsPerson *Person1 = &Employee1;
    clsPerson *Person2 = &Student1;

    Person1->Print();
    Person2->Print();

}