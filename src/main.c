/*
 * [ Function Tabulator ]
 * ----------------------
 * File Name    : main.c
 * Author       : Ali Allahverdiyev
 * Date Created : 15/10/2024
 * Last Edit    : 16/10/2024
 * Version      : v1.0.1
 *
 * Description  :
 *   This is the main file,
 *   where all of the implementations from other files are used.
 *
 * Notes:
 *   - [Any important notes or warnings here]
 *
 */

#include <utils.h>      // contains custom utility functions for this project
#include <math_utils.h> // contains custom math-related utility functions for this project

int main(int argc, char **argv) // used for debugging (command-line inputs)
{
    double x, y, start_val, coefficient, y_min;

    y_min = fetch_double(&y_min, "[-] Input the function's lower bound: ");
    start_val = fetch_double(&start_val, "[-] Input the starting value (A): ");

    do
    {
        coefficient = fetch_double(&coefficient, "[-] Input the coefficient (C): ");

        if (coefficient < 0)
            fputs("[!] The coefficient must be a non-zero value\n", stderr);
    } while (coefficient < 0);

    printf("\n");
    printf("+------------+------------+\n");
    printf("|     x      |     y      |\n");
    printf("+------------+------------+\n");

    for (size_t i = 0; i < MAX_ITER; ++i)
    {
        x = calculate_x(start_val, coefficient, i + 1);
        y = calculate_y(x);

        printf("| %10.4f | %10.4f |\n", x, y);

        if (y < y_min)
            break;
    }

    printf("+------------+------------+\n");

    printf("[+] Program has concluded its operations with success\n[+] Please press enter to close it. . .");
    getchar();

    return 0;
}