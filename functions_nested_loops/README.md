# 🚀 C - Functions, Loops & More

A collection of beginner C programs covering basic functions, conditional statements, loops, character checks, and arithmetic operations.

---

| #  | Name             | Description                                             | Prototype / Function Signature   |
| -- | ---------------- | ------------------------------------------------------- | -------------------------------- |
| 0  | `_putchar`       | Print `_putchar` followed by a newline.                 | `int main(void);`                |
| 1  | Alphabet Game    | Print the alphabet in lowercase, followed by a newline. | `void print_alphabet(void);`     |
| 2  | 10 x Alphabet    | Print the alphabet 10 times in lowercase.               | `void print_alphabet_x10(void);` |
| 3  | `islower`        | Check if a character is lowercase.                      | `int _islower(int c);`           |
| 4  | `isalpha`        | Check if a character is alphabetic.                     | `int _isalpha(int c);`           |
| 5  | Sign of a Number | Print the sign of a given number.                       | `int print_sign(int n);`         |
| 6  | Absolute Value   | Return the absolute value of an integer.                | `int _abs(int n);`               |
| 7  | Last Digit       | Print the last digit of a number.                       | `int print_last_digit(int n);`   |
| 8  | Jack Bauer Clock | Print every minute of the day from 00:00 to 23:59.      | `void jack_bauer(void);`         |
| 9  | Times Table      | Print the 9 times table starting at 0.                  | `void times_table(void);`        |
| 10 | `a + b`          | Add two integers and return the result.                 | `int add(int a, int b);`         |
| 11 | To 98            | Print all natural numbers from `n` to 98.               | `void print_to_98(int n);`       |

---

## ⚙️ Compile & Run

```bash
gcc -Wall -Wextra -pedantic -std=c99 -o main main.c *.c
./main
```

✅ Concepts Covered
Function declaration & definition

Basic I/O with _putchar()

for & while loops

if/else conditional logic

Character classification (_islower, _isalpha)

Arithmetic operations and math logic
