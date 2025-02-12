#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void SaveVectorToFile(string FilName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FilName, ios::out);

    if (MyFile.is_open())
    {
        for(string &line : vFileContent)
        {
            if (line != "")
            {
                MyFile << line << endl;
            }
            
        }
        
    }
    

}

int main()
{
    vector <string> vFileContent = {"Hi, sohaip", "Hi, Mohammed", "this is a new line", "this is anthar new line"};

    SaveVectorToFile("MyFile.txt", vFileContent);


}