cmake_minimum_required(VERSION 3.5)

project(Recursive LANGUAGES C)

add_executable(Recursive main.c sum_array.c sum_array.h FibonacciNumber.c FibonacciNumber.h intToStr.c intToStr.h)
