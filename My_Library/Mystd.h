#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace Mystd
{

    string ReadString()
    {
        string S;
        
        cout << "\nPlease enter your string: ";
        getline(cin, S);

        return S;
    }

    char ReadChar()
    {
        char S;
        
        cout << "\nPlease enter your Charactar: ";
        cin >> S;

        return S;
    }

    int ReadPositiveNumber(string Message)
    {
        float number;
        do
        {
            cout << endl << Message << " ";
            cin >> number;
        } while (number < 0);
        
        return number;
    }

    int ReadNumber(string Message)
    {
        float number;
            
        cout << Message << endl;
        cin >> number;
        
        return number;
    }

    // int ReadNumber(string Message) 
    // { 
    //     int Number;
    //     cout << Message<< endl;   
    //     cin >> Number;

    //     while (cin.fail())     
    //     { 
    //         cin.clear();      
    //         cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');          
    //         cout << "Invalid Number, Enter a valid one:" << endl;         
    //         cin >> Number;   
    //     } 
    //     return Number; 
    // }

    void PrintTableHeader()
    {
        cout << "\t\t\t  Multiplication table from 1 to 10" << endl;
        for (int i = 1; i <= 10; i++)
        {
            cout << "\t " << i ;
        }
        cout << "\n_____________________________________________________________________________________";

    }

    void PrintMultiplicationTable(short number[100])
    {
        PrintTableHeader();
        for (short i = 1; i <= 10; i++)
        {
            cout << endl << i << "\t|";
            for (short j = 1; j <= 10; j++)
            {
                cout << i * j << "\t ";
            }
        }
    }

    void PrintReverseNumber(int Number)
    {
        int Remainder = 0, x = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            x = x * 10 + Remainder;
        }
        cout << x;
    }

    void PrintDigitsInReversedOrder(int Number)
    {
        int Remainder = 0;

        while (Number > 0)
        {
            Remainder = Number % 10;
            Number = Number / 10;
            cout << Remainder << endl;
        }
        
    }

    void InvertedNumberPattern(int Number)
    {
        for (int i = 0; i < Number; i++)
        {
            for (int j = 0; j < Number - i; j++)
            {
                cout << Number - i;
            }
            cout << endl;
        }
    }

    void NumberPattern(int Number)
    {
        for (int i = 1; i <= Number; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << i;
            }
            cout << endl;
        }
    }

    void InvertedLetterPattern(int Number)
    {
        for (int i = Number; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                cout << char(64 + i);
            }
            cout << endl;
        }
    }

    void LetterPattern(int Number)
    {
        for (int i = 0; i < Number; i++)
        {
            for (int j = 64; j < 65 + i; j++)
            {
                cout << char(65 + i);
            }
            cout << endl;
        }
    }

    void PrintArray(int Arra[100], int ArraLength)
    {

        for (int i = 0; i < ArraLength; i++)
        {
            cout << Arra[i] << " ";
        }
        cout << endl;
    }


















}