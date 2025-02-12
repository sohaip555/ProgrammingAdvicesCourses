#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

enum enRandom
{
    SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit
};

int ReadPositivNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    int Result;
    
    Result = rand() % (To - From + 1) + From;
    return Result;
}

char GetRandomcaCharacter(enRandom Random)
{
    switch (Random)
    {
    case enRandom::CapitalLetter:
        return char(RandomNumber(65, 90));
    
    case enRandom::SmallLetter:
        return char(RandomNumber(97, 122));
    
    case enRandom::SpecialCharacter:
        return char(RandomNumber(33, 47));

    case enRandom::Digit:
        return RandomNumber(48, 57);

    default:
        return 0;
    }

}

string GetGenerateword(enRandom charTayp)
{
    string word = "";
        for (int j = 0; j < 4; j++)
        {
            word = word + GetRandomcaCharacter(charTayp);
        }
    return word;
}

string GetGenerateKey(string Array[100], int Arraylength)
{
    string Key;
    Key = GetGenerateword(enRandom::CapitalLetter) + "-";
    Key = Key + GetGenerateword(enRandom::CapitalLetter) + "-";
    Key = Key + GetGenerateword(enRandom::CapitalLetter) + "-";
    Key = Key + GetGenerateword(enRandom::CapitalLetter);
    
    return Key;
}

void FillAraryWithRandomNumbers(string Array[100], int &Arraylength)
{
    Arraylength = ReadPositivNumber("Please enter How many keys to Generate");
    for (int i = 0; i < Arraylength; i++)
    {
        Array[i] = GetGenerateKey(Array, Arraylength);
    }    
}

void PrintKeys(string Array[100], int Arraylength)
{
    for (int i = 0; i < Arraylength; i++)
    {
        cout << "Array [" << i << "] : " << Array[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    string  Array[100];
    int Arraylength;

    FillAraryWithRandomNumbers(Array, Arraylength);
    PrintKeys(Array, Arraylength);

}