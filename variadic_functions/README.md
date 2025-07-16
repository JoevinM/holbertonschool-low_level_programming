# C - Variadic functions

## Description

This project introduces **variadic functions** in C. These are functions that accept a variable number of arguments. You will learn how to define such functions using the `stdarg.h` library, and how to manipulate arguments dynamically.

---

## Files and Prototypes

| File                  | Prototype                                               | Description                                                                 |
|-----------------------|---------------------------------------------------------|-----------------------------------------------------------------------------|
| `0-sum_them_all.c`    | `int sum_them_all(const unsigned int n, ...);`         | Returns the sum of all its parameters. Returns 0 if `n == 0`.              |
| `1-print_numbers.c`   | `void print_numbers(const char *separator, const unsigned int n, ...);` | Prints numbers, separated by a string. Uses `printf`.                      |
| `2-print_strings.c`   | `void print_strings(const char *separator, const unsigned int n, ...);` | Prints strings, separated by a string. Prints `(nil)` if a string is `NULL`. |
| `3-print_all.c`       | `void print_all(const char * const format, ...);`       | Prints anything depending on the format string: `c`, `i`, `f`, `s`.        |
| `variadic_functions.h`| *Contains all prototypes*                               | Header file for this project.                                              |

---