#include <iostream>
using namespace std;

char InvertCharacterCase(char Latter)
{
    if (isupper(Latter))
    {
        return tolower(Latter);
    }
    else if (islower(Latter))
    {
        return toupper(Latter);
    }
    return Latter;
}

int main()
{
    char Latter;

    cout << "Pleas eneter your Latter: ";
    cin >> Latter;

    Latter = InvertCharacterCase(Latter);

    cout << Latter;
    system("pause>0");  

    return 0;
}