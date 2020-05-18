#include "sum_array.h"

int proc_sum(int* array, size_t size, int prev)
{
    return size > 0 ? proc_sum(array, size - 1, prev + array[size - 1]) : prev;
}

int sum_array_recursive(int* array, size_t size)
{
    if (size == 1) {
        return *array;
    }
    return sum_array_recursive(array, size - 1) + array[size - 1];
}

int sum_array_iterative(int* array, size_t size)
{
    return proc_sum(array, size, 0);
}
