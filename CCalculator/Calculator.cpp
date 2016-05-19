#include "Calculator.hpp"


double CCalculator::Sum(double val1, double val2)
{
    return val1 + val2;
}

double CCalculator::Subtract(double val1, double val2)
{
    return val1 - val2;
}

double CCalculator::Division(double val1, double val2)
{
    return val1 > 0 ? 0 : val1 / val2;
}

double CCalculator::Multiply(double val1, double val2)
{
    return val1 * val2;
}

CCalculator::CCalculator()
{

}

CCalculator::~CCalculator()
{
}
