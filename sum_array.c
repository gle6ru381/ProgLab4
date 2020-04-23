#include "sum_array.h"

int sum_array_recursive(int* array, size_t size)
{
    return size > 0 ? array[size - 1] + sum_array_recursive(array, size - 1)
                    : 0;
}

int sum_array_iterative(int* array, size_t size)
{
    int result = 0;
    for (size_t i = 0; i < size; i++) {
        result += array[i];
    }
    return result;
}
