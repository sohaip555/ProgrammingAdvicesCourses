#include <iostream>
using namespace std;


class clsAddress
{
private:

    string _AddressLine1;
    string _AddressLine2;
    string _PoBox;
    string _ZipCode;

public:

    clsAddress(string AddressLine1, string AddressLine2, string PoBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _PoBox = PoBox;
        _ZipCode = ZipCode;
    }

    void SetAddressLine1()
    {
        cout << "Please enter Addres Line 1: " << endl;
        cin >> _AddressLine1;
    }
    
    void SetAddressLine2()
    {
        cout << "Please enter Addres Line 2: " << endl;
        cin >> _AddressLine2;
    }

    void SetPoBox()
    {
      cout << "Please enter POBox: " << endl;
      cin >> _PoBox;  
    }

    void SetZipCode()
    {
        cout << "Please enter ZipCode: " << endl;
        cin >> _ZipCode;
    }

    string GetAddressLine1()
    {
        return _AddressLine1;
    }

    string GetAddressLine2()
    {
        return _AddressLine2;
    }

    string GetPoBox()
    {
        return _PoBox;
    }

    string GetZipCode()
    {
        return _ZipCode;
    }

    void Print()
    {
        cout << "Adress Datelis " << endl;
        cout << "_________________________________" << endl;
        cout << "AddresLine 1: " << _AddressLine1 << endl;
        cout << "Addres Line 2: " << _AddressLine2 << endl;
        cout << "POBox: " << _PoBox << endl;
        cout << "ZipCode: " << _ZipCode << endl;
    }

};



int main()
{
    clsAddress Address("Tripoli", "Tajora", "2365", "22225");
    Address.Print();

    system("pause>0");
}