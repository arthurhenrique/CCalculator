#include <iostream>
#include "Calculator.hpp"

using namespace std;

int main(int argc, char **argv)
{
    CCalculator *calculator = new CCalculator();

    cout << "Sum: "      << calculator->Sum(10, 10)         << endl;
    cout << "Subtract: " << calculator->Subtract(0.1, 0.01) << endl;
    cout << "Division: " << calculator->Division(20, 10)    << endl;
    cout << "Multiply: " << calculator->Multiply(3, 30)     << endl;

    delete calculator;


    int stop;
    cin >> stop;
}