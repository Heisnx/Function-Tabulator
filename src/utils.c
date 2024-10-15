/*
 * [ Function Tabulator ]
 * ----------------------
 * File Name    : utils.c
 * Author       : Ali Allahverdiyev
 * Date Created : 15/10/2024
 * Last Edit    : 16/10/2024
 *
 * Description  :
 *   This source file implements utility functions declared in utils.h.
 *   It includes input handling functions and any other utility functions
 *   required by the program.
 *
 * Notes:
 *   - Ensure that this file is compiled during building process.
 */

#include <utils.h>

/*
 * fetch_double()
 * ----------------------
 * Description:
 *      Prompts the user before reading with fgets().
 *      The read value is converted into a long float (lf).
 *
 * Notes:
 *      I decided to omit the brackets for one-line if statements.
 *      The errors will be written onto the error strea via fputs().
 */
double fetch_double(double *input, const char *prompt)
{
    char buffer[BUFFER];

    while (1)
    {
        printf("%s", prompt);

        if (fgets(buffer, sizeof(buffer), stdin) != NULL) // input stored in the buffer - read from input stream
        {
            char *endptr;                         // used to track where the conversion from string to integer stops
            errno = 0;                            // clearing of errno used to prevent false positives
            long value = strtod(buffer, &endptr); // converts the string value to a long integer

            if (endptr == buffer || *endptr != '\n') // if no digits or lefover data were found
                fputs("[!] Invalid input (non-integer or extra characters)\n", stderr);

            else if (errno == ERANGE) // Check for out-of-range errors
                fputs("[!] Input out of range\n", stderr);

            else
                return (double)value; // returns the converted value as a double
        }
        else
            fputs("[!] Error handling input\n", stderr);
    }
}