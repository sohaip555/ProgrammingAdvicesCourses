#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void LoadDataFromFileToVector(string FilName, vector <string> &vFileContent)
{
    fstream MyFile;

    MyFile.open(FilName, ios::in);

    if (MyFile.is_open())
    {
        string line;
        while (getline(MyFile, line))
        {
            vFileContent.push_back(line);
        }
        
    }
    

}

int main()
{
    vector <string> vFileContent;

    LoadDataFromFileToVector("Myfile.txt", vFileContent);

    for ( string &line : vFileContent)
    {
        cout << line << endl;
    }


}