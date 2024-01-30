#include "Operations.h"

double Operations::Sum(double num1, double num2)
{
    double sum = num1 + num2;

    return sum;
}


double Operations::Subtract(double num1, double num2)
{
    double difference = num1 - num2;

    return difference;
}


double Operations::Multiply(double num1, double num2)
{
    double product = num1 * num2;

    return product;
}



double Operations::Divide(double num1, double num2)
{
    double quotient = num1 / num2;
    return quotient;
}



double Operations::Squared(double base)
{
    double squared = pow(base, 2.0);

    return squared;
}



double Operations::Cubed(double base)
{
    double cubed = pow(base, 3.0);
    return cubed;
}



double Operations::NthRoot(double base, double root)
{
    double result = pow(base, (1 / root));

    return result;
}



double Operations::Power(double base, double exp)
{
    double result = pow(base, exp);
    return result;
}



double Operations::SquareRoot(double base)
{
    double result = sqrt(base);
    return result;
}



double Operations::CubedRoot(double base)
{
    double result = cbrt(base);
    return result;
}




