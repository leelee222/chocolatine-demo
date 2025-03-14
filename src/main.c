#include <stdio.h>
#include "../include/my_program.h"

int main(void)
{
    printf("Addition: 5 + 3 = %d\n", my_add(5, 3));
    printf("Multiplication: 4 * 7 = %d\n", my_multiply(4, 7));
    printf("Factorial of 5 = %d\n", my_factorial(5));
    return 0;
}