#include "FibonacciNumber.h"
#include "intToStr.h"
#include "sum_array.h"
#include <stdio.h>

int main()
{
    int array[5] = {10, 15, 20, 5, 1};
    printf("%d\n", sum_array_recursive(array, 5));
    printf("%d\n", sum_array_iterative(array, 5));
    printf("%d\n", fibonacciNumberRecursive(10));
    printf("%d\n", fibonacciNumberIterative(10));
    char str[10] = {0};
    printf("%zu\n", intToStr(15663231, str));
    printf("%s\n", str);
    return 0;
}
