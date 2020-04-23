#include "intToStr.h"

size_t intToStr(int number, char* buf, size_t bit)
{
    if (number < 10) {
        buf[bit] = number + '0';
        return bit + 1;
    } else {
        bit = intToStr(number / 10, buf, bit);
        buf[bit] = number % 10 + '0';
        return bit + 1;
    }
}
