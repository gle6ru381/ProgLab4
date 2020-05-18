#include "FibonacciNumber.h"

uint procFib(uint n, uint one, uint two)
{
    return n == 2 ? one < two ? two : one : procFib(n - 1, two, two + one);
}

uint fibonacciNumberRecursive(uint n)
{
    if (n == 1 || n == 2) {
        return 1;
    }
    return fibonacciNumberRecursive(n - 1) + fibonacciNumberRecursive(n - 2);
}

uint fibonacciNumberIterative(uint n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return procFib(n, 1, 1);
}
