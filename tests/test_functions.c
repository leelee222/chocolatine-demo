#include <criterion/criterion.h>
#include "../include/my_program.h"

Test(my_add, basic_addition)
{
    cr_assert_eq(my_add(2, 3), 5, "Addition failed");
}

Test(my_multiply, basic_multiplication)
{
    cr_assert_eq(my_multiply(3, 4), 12, "Multiplication failed");
}

Test(my_factorial, basic_factorial)
{
    cr_assert_eq(my_factorial(5), 120, "Factorial calculation failed");
}

Test(my_factorial, edge_cases)
{
    cr_assert_eq(my_factorial(0), 1, "Factorial of 0 should be 1");
    cr_assert_eq(my_factorial(1), 1, "Factorial of 1 should be 1");
}