#include <iostream>
using namespace std;

class clsCalculator
{
private:

    int _Number = 0;
    int _Result = 0;
    int _LastResult = 0;
    string _Operations = "";

public:

    void Claer()
    {
        _Number = 0;
        _Result = 0;
        _LastResult = 0;
        _Operations = "Claer";
    }

    void Add(int Number)
    {
        _Number = Number;
        _Result = _LastResult;
        _LastResult = _LastResult + Number;

        _Operations = "Add";
    }

    void Suptract(int Number)
    {
        _Number = Number;
        _Result = _LastResult;
        _LastResult = _LastResult - Number;
        
        _Operations = "Suptract";
    }

    void Multiply(int Number)
    {
        _Number = Number;
        _Result = _LastResult;
        _LastResult = _LastResult * Number;
        
        _Operations = "Multiply";
    }

    void Divide(int Number)
    {
        if (Number == 0)
        {
            Number = 1;
        }
        
        _Number = Number;
        _Result = _LastResult;
        _LastResult = _LastResult / Number;
        
        _Operations = "Divide";
    }

    void CanselLastOperations()
    {
        _Number = 0;
        _LastResult = _Result;
        _Operations = "Cansel Last Operations";
        
    }

    void PrintResult()
    {
        cout << "Result after " << _Operations << " " << _Number << " is: " << _LastResult << endl;
    }

   int GetFinalResult()
    {
        return _LastResult;
    }
};

int main()
{

    clsCalculator Calculator;

    Calculator.Claer();

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Add(100);
    Calculator.PrintResult();

    Calculator.Suptract(20);
    Calculator.PrintResult();

    Calculator.Divide(0);
    Calculator.PrintResult();

    Calculator.Divide(2);
    Calculator.PrintResult();

    Calculator.Multiply(3);
    Calculator.PrintResult();

    // Calculator.Claer();
    // Calculator.PrintResult();

    Calculator.CanselLastOperations();
    Calculator.PrintResult();

    cout << "The final result is: " << Calculator.GetFinalResult() << endl;

}