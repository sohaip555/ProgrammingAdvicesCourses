#include <iostream>
#include <string>
using namespace std;

string ReadPassword()
{
    string Password;
    cout << "Please enter a 3-latter password (all capital)?" << endl;
    cin >> Password;
    return Password;
}

bool GuessPassword(string Password)
{
    string word = "";
    int counter = 1;
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int n = 65; n <= 90; n++)
            {
                word = "";
                word = word + char(i);
                word = word + char(j);
                word = word + char(n);
                if (Password == word)
                {
                    cout << "Trial [" << counter << "] : " << word << endl;
                    cout << endl << "Passwors is " << word << endl;
                    cout << "Found oftar " << counter << " Trial(s)" << endl;
                    return 1;
                }
                cout << "Trial [" << counter << "] : " << word << endl;
                counter++;
            }
        }
    }
    return 0;
}

int main()
{
    GuessPassword(ReadPassword());
}