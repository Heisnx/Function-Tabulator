/*
 * [ Function Tabulator ]
 * ----------------------
 * File Name    : math_utils.h
 * Author       : Ali Allahverdiyev
 * Date Created : 15/10/2024
 * Last Edit    : 16/10/2024
 *
 * Description  :
 *   This header file contains declarations for mathematical utility functions used in the program.
 *   It includes function prototypes, constants, and necessary library inclusions.
 *
 * Notes:
 *   - Ensure to include this header in any source files that utilize maths utility functions.
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

#include <stdio.h> // used for stderr
#include <errno.h> //
#include <math.h>  // used for sine and cosine calculations

/*
 * calculate_x()
 * ----------------------
 * Description:
 *      Calculates the equation [A / (n * C)].
 *      This function is part of a for loop.
 *
 * Parameters:
 *      A: the starting value
 *      C: the coefficient
 *      n: iteration (1++)
 *
 * Return:
 *      [double] The value of x.
 */
double calculate_x(double A, double C, int n);

/*
 * calculate_y()
 * ----------------------
 * Description:
 *      Calculates the function given in the homework.
 *      For me, it is y = (1/cos(x)) / (1 + sin(x^2)).
 *
 * Parameters:
 *      x: the x-value of the function.
 *
 * Return:
 *      [double] The value of y.
 */
double calculate_y(double x);

#endif // MATH_UTILS_H