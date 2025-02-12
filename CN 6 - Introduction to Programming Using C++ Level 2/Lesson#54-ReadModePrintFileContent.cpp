#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void ReadFileContent(string FilName)
{
    fstream MyFile;

    MyFile.open(FilName, ios::in);

    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            cout << line << endl;
        }
        
    }
    

}


int main()
{

    ReadFileContent("Myfile.txt");
    
}