#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void PrintcontentFile(string FileName)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    string line;
    while (getline(MyFile, line))
    {
        cout << line << endl;
    }

    MyFile.close();
}

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    string line;
    while (getline(MyFile, line))
    {
        vFileContent.push_back(line);
    }

    MyFile.close();
}

void SaveVectorToFile(string FileName, vector <string> vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);

    for(string &line : vFileContent)
    {
        if (line != "")
        {
            MyFile << line << endl;
        }
        
    }
    MyFile.close();
}

void DeletRecord(string FileName, string Record, string UpdateTo)
{ 
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for(string &line : vFileContent)
    {
        if (line == Record)
        {
            line = UpdateTo;
        }
        
    }

    SaveVectorToFile(FileName, vFileContent);
}

int main()
{
    cout << "Print file befor delet" << endl;
    PrintcontentFile("MyFile.txt");

    DeletRecord("MyFile.txt", "Ali", "Omar");

    cout << "\n\nPrint file after delet" << endl;
    PrintcontentFile("MyFile.txt");
}