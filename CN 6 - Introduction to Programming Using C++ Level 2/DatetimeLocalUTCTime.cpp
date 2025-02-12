#pragma warneing(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    time_t t = time(0);
    // cout << t << endl;

    char* dt = ctime(&t);
    cout << dt << endl;

    tm* gmtm = gmtime(&t);
    dt = asctime(gmtm);
    cout << dt << endl;

}