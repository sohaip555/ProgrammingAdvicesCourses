#include <iostream> 
#include <fstream> 
using namespace std;

int main()
{
    fstream Myfile;

    Myfile.open("Myfile.txt", ios::out | ios::app);

    Myfile << "This is first line\n";
    Myfile << "This is anther new line\n";

    Myfile.clear();
}