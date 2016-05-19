#pragma once
class CCalculator
{
public:
    template <typename TypeCalculator>
    double Sum(TypeCalculator val1, TypeCalculator val2);
    template <typename TypeCalculator>
    double Subtract(TypeCalculator val1, TypeCalculator val2);
    template <typename TypeCalculator>
    double Division(TypeCalculator val1, TypeCalculator val2);
    template <typename TypeCalculator>
    double Multiply(TypeCalculator val1, TypeCalculator val2);
    CCalculator();
    ~CCalculator();
};

