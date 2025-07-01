# 🧠 C - Pointers, Arrays & Strings

A curated collection of C functions to master the fundamentals of pointers, arrays, strings, and memory operations.

---

## 📌 Project Overview

This project explores the core of low-level programming in C:

- Pointer manipulation  
- String operations  
- Array handling  
- Custom implementation of standard library functions  
- Deep memory understanding  

---

## 🔧 Functions

### 🔹 Part 1: Pointers, Arrays, and Strings (Basics)

- **`void reset_to_98(int *n)`**  
  Sets the value pointed to by `n` to `98`.

- **`void swap_int(int *a, int *b)`**  
  Swaps the values of `a` and `b`.

- **`int _strlen(char *s)`**  
  Returns the length of a string.

- **`void _puts(char *str)`**  
  Prints a string followed by a newline.

- **`void print_rev(char *s)`**  
  Prints a string in reverse.

- **`void rev_string(char *s)`**  
  Reverses a string in-place.

- **`void puts2(char *str)`**  
  Prints every other character of a string.

- **`void puts_half(char *str)`**  
  Prints the second half of a string.

- **`void print_array(int *a, int n)`**  
  Prints `n` elements of an integer array.

- **`char *_strcpy(char *dest, char *src)`**  
  Copies the string `src` to `dest`.

- **`int _atoi(char *s)`**  
  Converts a string to an integer.

---

### 🔹 Part 2: More Pointers, Arrays and Strings

- **`char *_strcat(char *dest, char *src)`**  
  Concatenates `src` to `dest`.

- **`char *_strncat(char *dest, char *src, int n)`**  
  Concatenates up to `n` characters of `src`.

- **`char *_strncpy(char *dest, char *src, int n)`**  
  Copies up to `n` characters from `src` to `dest`.

- **`int _strcmp(char *s1, char *s2)`**  
  Compares two strings.

- **`void reverse_array(int *a, int n)`**  
  Reverses an array of integers.

- **`char *string_toupper(char *s)`**  
  Converts all lowercase letters to uppercase.

- **`char *cap_string(char *s)`**  
  Capitalizes all words in a string.

- **`char *leet(char *s)`**  
  Encodes a string into 1337 speak.

---

### 🔹 Part 3: Even More Pointers and Memory

- **`char *_memset(char *s, char b, unsigned int n)`**  
  Fills memory with a constant byte.

- **`char *_memcpy(char *dest, char *src, unsigned int n)`**  
  Copies memory area.

- **`char *_strchr(char *s, char c)`**  
  Locates a character in a string.

- **`unsigned int _strspn(char *s, char *accept)`**  
  Gets length of a prefix substring.

- **`char *_strpbrk(char *s, char *accept)`**  
  Searches a string for any of a set of bytes.

- **`char *_strstr(char *haystack, char *needle)`**  
  Finds the first occurrence of `needle` in `haystack`.

- **`void print_chessboard(char (*a)[8])`**  
  Prints an 8x8 chessboard.

- **`void print_diagsums(int *a, int size)`**  
  Prints the sum of the diagonals of a square matrix.

---

## ⚙️ Compilation & Execution

```bash
gcc -Wall -Wextra -pedantic -std=c99 -o main main.c *.c
./main


✅ Skills You Will Gain
📌 Memory and pointer handling

📌 String and array operations without standard libs

📌 Manual implementation of common functions

📌 Understanding of 1D & 2D memory layouts

📌 Logic building at a low level

