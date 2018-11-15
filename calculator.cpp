#include "calculator.h"

int Calculator::Add (int a, int b)
{
    return a + b;
}

int Calculator::Sub (int a, int b)
{
    return Add (a, -b);
}
