#include <istream>
#include"..\My_Library\Mystd.h"
using namespace std;


int main()
{

    int Number = 22;
    string Result;
    Result = (Number == 0) ? "Zero" : (Number > 0) ? "positive" : "Negative";

    

    cout << Result;
}