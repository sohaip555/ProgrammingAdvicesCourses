#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    fstream Myfile;

    Myfile.open("Myfile.txt", ios::out);

    if (Myfile.is_open())
    {
        Myfile << "Hi, Thid id the first line" << endl;
        Myfile << "Hi, This is the second line" << endl;
        Myfile << "Hi, This is the therd line" << endl;
    
        Myfile.close();
    }
    
}