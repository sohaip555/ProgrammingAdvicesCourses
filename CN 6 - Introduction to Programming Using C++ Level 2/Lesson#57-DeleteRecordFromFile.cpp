#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void PrintcontentFile(string FileNma)
{
    fstream MyFile;

    MyFile.open(FileNma, ios::in);

    string line;
    while (getline(MyFile, line))
    {
        cout << line << endl;
    }
    
}

void LoadDataFromFileToVector(string FileName, vector <string>& vFileContent)
{
    fstream MyFile;
    MyFile.open(FileName, ios::in);

    string line;
    while (getline(MyFile, line))
    {
        if (line != "")
        {
            vFileContent.push_back(line);
        }
    }
}

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

void DeletRecord(string FileName, string Record)
{
    vector <string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);

    for(string &Line : vFileContent)
    {
        if (Line == Record)
        {
            Line = "";
        }
    }
    SaveVectorToFile("MyFile.txt", vFileContent);

}

int main()
{
    cout << "Print file befor delet" << endl;
    PrintcontentFile("MyFile.txt");

    DeletRecord("MyFile.txt", "Ali");

    cout << "\n\nPrint file after delet" << endl;
    PrintcontentFile("MyFile.txt");
}