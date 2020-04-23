#include "FibonacciNumber.h"

uint fibonacciNumberRecursive(uint n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonacciNumberRecursive(n - 1)
                + fibonacciNumberRecursive(n - 2);
}

uint fibonacciNumberIterative(uint n)
{
    uint number1 = 1;
    uint number2 = 1;

    for (uint i = 3; i <= n; i++) {
        if (i % 2 == 1)
            number1 += number2;
        else
            number2 += number1;
    }

    return number1 > number2 ? number1 : number2;
}
