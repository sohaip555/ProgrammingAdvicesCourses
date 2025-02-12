// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
#include "clsBankClient.h"
int main()

{

    clsBankClient BankClient = clsBankClient ::Find("A150");

    BankClient.Print();

    system("pause>0");

    return 0;
}