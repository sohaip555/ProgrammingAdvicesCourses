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

string GetGenerateWord(enRandom charType)
{
    string word = "";
        for (int j = 0; j < 4; j++)
        {
            word = word + GetRandomcaCharacter(charType);
        }
    return word;
}

string GetGenerateKey()
{
    string EncryptText = "";

    EncryptText = GetGenerateWord(enRandom::CapitalLetter) + "-";
    EncryptText = EncryptText + GetGenerateWord(enRandom::CapitalLetter) + "-";
    EncryptText = EncryptText + GetGenerateWord(enRandom::CapitalLetter) + "-";
    EncryptText = EncryptText + GetGenerateWord(enRandom::CapitalLetter);

    return EncryptText;
}

void PrintKeys(int NumberOfKey)
{
    for (int i = 0; i < NumberOfKey; i++)
    {
        cout << "Key [" << i + 1 << "] : " << GetGenerateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int NumberOfKey;
    NumberOfKey = ReadPositivNumber("Please enter How many keys to Generate");
    PrintKeys(NumberOfKey);

}