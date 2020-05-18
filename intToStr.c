#include "intToStr.h"

size_t toStr(int number, char* buf, size_t ind)
{
    if (number < 10) {
        buf[ind] = number + '0';
        return ind + 1;
    } else {
        ind = toStr(number / 10, buf, ind);
        buf[ind++] = number % 10 + '0';
        buf[ind] = 0;
        return ind;
    }
}

size_t intToStr(int number, char* buf)
{
    return toStr(number, buf, 0);
}
