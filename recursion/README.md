 C Recursion Project

## Description

This project is part of the Holberton School curriculum and focuses on understanding and implementing recursion in C.  
You will write several recursive functions to manipulate strings and integers without using loops, global or static variables, or standard library functions (except `_putchar`).

---

## Learning Objectives

By the end of this project, you should be able to:

- Understand what recursion is and how it works.
- Implement recursive functions in C.
- Know when recursion is appropriate or not.
- Write recursive functions that comply with strict coding standards (Betty style).
- Avoid using loops, global/static variables, and standard library functions other than `_putchar`.

---
## Why recursion?

> "Recursion is when a function calls itself to solve a subproblem of the original problem."

It is powerful for certain types of problems, such as tree processing, sorting/search algorithms, or recursive manipulation of data structures.


---

## Tasks and Function Prototypes

| Task | Description                                                | Prototype                              | Notes                                                                                      |
|-------|------------------------------------------------------------|--------------------------------------|--------------------------------------------------------------------------------------------|
| 0     | Print a string followed by a new line                       | `void _puts_recursion(char *s);`     | Similar to `puts`                                                                          |
| 1     | Print a string in reverse                                   | `void _print_rev_recursion(char *s);` |                                                                                          |
| 2     | Return the length of a string                               | `int _strlen_recursion(char *s);`    | Similar to `strlen`                                                                        |
| 3     | Return the factorial of a number                            | `int factorial(int n);`               | Return -1 if n < 0. Factorial(0) = 1                                                     |
| 4     | Return x raised to the power y                              | `int _pow_recursion(int x, int y);`  | Return -1 if y < 0                                                                        |
| 5     | Return the natural square root of a number                  | `int _sqrt_recursion(int n);`        | Return -1 if no natural square root exists                                                |
| 6     | Return 1 if the number is prime, otherwise 0               | `int is_prime_number(int n);`        |                                                                                            |

---
