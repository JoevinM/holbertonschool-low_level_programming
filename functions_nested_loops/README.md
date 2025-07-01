# 🚀 C - Functions, Loops & More

A collection of beginner C programs covering basic functions, conditional statements, loops, character checks, and arithmetic operations.

---

## 🔧 Programs & Functions

### 🔹 0. `_putchar`
- **Goal:** Print `_putchar`, followed by a newline.
- **Prototype:** `int main(void);`

---

### 🔹 1. Alphabet Game
- **Goal:** Print the alphabet in lowercase, followed by a newline.
- **Function:** `void print_alphabet(void);`

---

### 🔹 2. 10 x Alphabet
- **Goal:** Print the alphabet 10 times in lowercase.
- **Function:** `void print_alphabet_x10(void);`

---

### 🔹 3. `islower`
- **Goal:** Check for a lowercase character.
- **Function:** `int _islower(int c);`

---

### 🔹 4. `isalpha`
- **Goal:** Check for an alphabetic character.
- **Function:** `int _isalpha(int c);`

---

### 🔹 5. Sign of a Number
- **Goal:** Print the sign of a number.
- **Function:** `int print_sign(int n);`

---

### 🔹 6. Absolute Value
- **Goal:** Return the absolute value of an integer.
- **Function:** `int _abs(int n);`

---

### 🔹 7. Last Digit
- **Goal:** Print the last digit of a number.
- **Function:** `int print_last_digit(int n);`

---

### 🔹 8. Jack Bauer Clock
- **Goal:** Print every minute of the day from `00:00` to `23:59`.
- **Function:** `void jack_bauer(void);`

---

### 🔹 9. Times Table
- **Goal:** Print the 9 times table, starting from 0.
- **Function:** `void times_table(void);`

---

### 🔹 10. `a + b`
- **Goal:** Add two integers and return the result.
- **Function:** `int add(int a, int b);`

---

### 🔹 11. To 98
- **Goal:** Print all natural numbers from `n` to `98`.
- **Function:** `void print_to_98(int n);`

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
