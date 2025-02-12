#pragma warneing(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;


int main()
{
    time_t t = time(0);

    tm* time = localtime(&t);

    cout << time->tm_hour << endl;
    cout << time->tm_isdst << endl;
    cout << time->tm_mday << endl;
    cout << time->tm_min << endl;
    cout << time->tm_mon + 1<< endl;
    cout << time->tm_sec << endl;
    cout << time->tm_wday << endl;
    cout << time->tm_yday << endl;
    cout << time->tm_year + 1900 << endl;


}