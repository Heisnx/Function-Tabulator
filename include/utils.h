/*
 * [ Function Tabulator ]
 * ----------------------
 * File Name    : utils.h
 * Author       : Ali Allahverdiyev
 * Date Created : 15/10/2024
 * Last Edit    : 15/10/2024
 *
 * Description  :
 *   This header file contains declarations for utility functions used in the program.
 *   It includes function prototypes, constants, and necessary library inclusions.
 *
 * Notes:
 *   - Ensure to include this header in any source files that utilize utility functions.
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>  // to use the input stream
#include <stdlib.h> // to convert values from string to long integer and double
#include <errno.h>  // to detect range errors in the fetch functions

#define BUFFER 100
#define MAX_ITER 20

/*
 * fetch_double()
 * ----------------------
 * Description:
 *      Prompts the user before reading with fgets().
 *      The read value is converted into a long int (ld).
 *
 * Parameters:
 *      input   : pointer to the integer variable to store the validated input.
 *      prompt  : the message prompt to the user.
 *
 * Return:
 *      [double] The converted long float (double) value.
 */
double fetch_double(double *input, const char *prompt);

#endif // UTILS_H