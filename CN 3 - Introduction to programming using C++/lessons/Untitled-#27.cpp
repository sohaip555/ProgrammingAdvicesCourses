#include <iostream>
using namespace std;


struct Address
{
    string strees;
    string POBOX;
};



struct Owner
{
    string Nema;
    string PhoneNumber;
    Address addresso;
};



struct car
{
    
    string Brand;
    string Model;
    int Year;
    Owner owner;


};


int main(){


car MyCar1, MyCar2, W;

MyCar1.Brand = "Toyota";
MyCar1.Model = "Corolla";
MyCar1.Year = 2006;
W.owner.Nema = "sohaip";
W.owner.PhoneNumber = "+218 914163016";
W.owner.addresso.strees = "";
W.owner.addresso.POBOX = "22574";
cout << "Brand: " << MyCar1.Brand << endl << "Model: " << MyCar1.Model << endl << "Year: " << MyCar1.Year << endl; 


cout << "Nema: " << W.owner.Nema  << endl << "Phone number:" << W.owner.PhoneNumber << endl << "Street" << W.owner.addresso.strees;


return 0;
}