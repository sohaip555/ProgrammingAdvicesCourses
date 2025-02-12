#include <iostream>
#include <string>
using namespace std;

string ReaseText()
{
    string Name;
    cout << "Plrae enter your name?" << endl;
    cin >> Name;

    return Name;
}

string EncryptText(string Text, int EncryptKay)
{
    string EncryptText = "";
    for (int i = 0; i < Text.length(); i++)
    {
        EncryptText = EncryptText + char(Text[i] + EncryptKay);
    }
    return EncryptText;
}

string DecryptText(string EncryptText, int EncryptKay)
{
    string DecryptText = "";
    for (int i = 0; i < EncryptText.size(); i++)
    {
        DecryptText = DecryptText + char(EncryptText[i] - 2);
    }
    return DecryptText;
}

int main()
{
    int EncryptKay = 2;
    string Text = ReaseText();
    string TextBeforEncryption = EncryptText(Text, EncryptKay);
    string TextBeforDecryption = DecryptText(TextBeforEncryption, EncryptKay);
    
    cout << "Text befor encryption : " << Text << endl;
    cout << "Text after encryption : " << TextBeforEncryption << endl;
    cout << "Text after Decryption : " << TextBeforDecryption << endl;



    return 0;
}