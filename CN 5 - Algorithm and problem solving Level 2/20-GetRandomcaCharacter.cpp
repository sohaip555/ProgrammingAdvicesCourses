#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

enum enRandom{
    SmallLetter = 1, CapitalLetter, SpecialCharacter, Digit
};

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

int main()
{
    srand((unsigned)time(NULL));

    cout << GetRandomcaCharacter(enRandom::CapitalLetter) << endl;
    cout << GetRandomcaCharacter(enRandom::SmallLetter) << endl;
    cout << GetRandomcaCharacter(enRandom::SpecialCharacter) << endl;
    cout << GetRandomcaCharacter(enRandom::Digit) << endl;


}