# Function Tabulator

[![Version](https://img.shields.io/badge/version-v1.1.1-blue.svg)](https://shields.io/)
[![License](https://img.shields.io/badge/license-MIT-brightgreen.svg)](https://choosealicense.com/)

## Overview

**Function Tabulator** is a simple C program that calculates function values based on user input. The program takes in a starting value (`A`), a step coefficient (`C`), and a function value lower bound (`Y_MIN`). It calculates values of the function:

\[ y = \frac{1}{\cos(x)} / \sqrt{1 + \sin(x^2)} \]

The values are calculated iteratively while the function value remains greater than `Y_MIN`, but not more than 20 times. The program is designed with error handling for invalid input and offers formatted output in a tabular form.

## Features

- **Dynamic Function Calculation**: Calculates function values based on user input.
- **Custom Error Handling**: Ensures valid input for coefficients and function parameters.
- **Formatted Output**: Displays calculated `x` and `y` values in a neatly formatted table.
- **Precise Calculations**: Supports floating-point precision for accurate results.