#ifndef INTTOSTR_H
#define INTTOSTR_H

#include <stddef.h>

size_t intToStr(int number, char* buf, size_t bit);

#define IntToStr(number, buf) intToStr(number, buf, 0)

#endif
