/*
 * [ Function Tabulator ]
 * ----------------------
 * File Name    : math_utils.c
 * Author       : Ali Allahverdiyev
 * Date Created : 15/10/2024
 * Last Edit    : 16/10/2024
 *
 * Description  :
 *   This source file implements utility functions declared in math_utils.h.
 *   It includes mathematical functions required by the home test.
 *
 * Notes:
 *   - Ensure that you properly compile this before running the program.
 */

#include <math_utils.h>

/*
 * calculate_x()
 * ----------------------
 * Description:
 *      Calculates the equation [A / (n * C)].
 *      This function is part of a for loop.
 *
 * Notes:
 *      - This function refused to work no matter what,
 *      and I frankly had no idea why, so this is why it's
 *      declared like this.
 */
double calculate_x(double A, double C, int n)
{
    return A / (n * C);
}

/*
 * calculate_y()
 * ----------------------
 * Description:
 *      Calculates the function given in the homework.
 *      For me, it is y = (1/cos(x)) / (1 + sin(x^2)).
 *
 * Notes:
 *      - I used errno.h as a more concise way of spotting
 *      division by zero.
 */
double calculate_y(double x)
{
    double cos_x = cos(x);
    double sin_x2 = sin(x * x);

    if (cos_x == 0)
    {
        fputs("[!] Division by zero (cos(x) is zero)\n", stderr);
        errno = EDOM; // domain error
        return NAN;   // return non-number value (error)
    }

    double y = (1 / cos_x) / sqrt(1 + sin_x2);

    return y;
}