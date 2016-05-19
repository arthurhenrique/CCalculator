#include "Calculator.hpp"

template double CCalculator::Sum<double>(double, double);
template double CCalculator::Sum<float>(float, float);
template double CCalculator::Sum<int>(int, int);
template <typename TypeCalculator>
double CCalculator::Sum(TypeCalculator val1, TypeCalculator val2)
{
    return val1 + val2;
}

template double CCalculator::Subtract<double>(double, double);
template double CCalculator::Subtract<float>(float, float);
template double CCalculator::Subtract<int>(int, int);
template <typename TypeCalculator>
double CCalculator::Subtract(TypeCalculator val1, TypeCalculator val2)
{
    return val1 - val2;
}

template double CCalculator::Division<double>(double, double);
template double CCalculator::Division<float>(float, float);
template double CCalculator::Division<int>(int, int);
template <typename TypeCalculator>
double CCalculator::Division(TypeCalculator val1, TypeCalculator val2)
{
    return val1 > 0 ? 0 : val1 / val2;
}

template double CCalculator::Multiply<double>(double, double);
template double CCalculator::Multiply<float>(float, float);
template double CCalculator::Multiply<int>(int, int);
template <typename TypeCalculator>
double CCalculator::Multiply(TypeCalculator val1, TypeCalculator val2)
{
    return val1 * val2;
}

CCalculator::CCalculator()
{

}

CCalculator::~CCalculator()
{
}
