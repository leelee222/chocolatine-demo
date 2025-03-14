#include "../include/my_program.h"

int my_add(int a, int b)
{
    return a + b;
}

int my_multiply(int a, int b)
{
    return a * b;
}

int my_factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * my_factorial(n - 1);
}