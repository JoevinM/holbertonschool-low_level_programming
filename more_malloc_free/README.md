# 0x0C. C - More malloc, free

## 📚 Description

This project focuses on dynamic memory allocation in C using `malloc`, including custom allocation functions, memory zeroing, and creating integer arrays.

---

## 🧾 Mandatory Functions

## 🔧 Functions Summary

| # | Function          | Description                                      |
|---|-------------------|--------------------------------------------------|
| 0 | `malloc_checked`  | Allocates memory with `malloc`; exits on failure. |
| 1 | `string_nconcat`  | Concatenates `s1` and first `n` bytes of `s2`.   |
| 2 | `_calloc`         | Allocates zero-initialized memory for an array.  |
| 3 | `array_range`     | Creates an int array from `min` to `max`.        |

---

## 🔍 Notes

- Use `size_t` instead of `unsigned int` in your implementations for better compatibility with large memory sizes (e.g., `SIZE_MAX`).
- Treat `NULL` string inputs as empty strings (`""`) in `string_nconcat`.
- Use `memset` or loops to zero out memory in `_calloc`.
- Calculate array size as `(max - min + 1)` for `array_range`.

---

## 🧪 Compilation

Compile your code with strict flags for Betty compliance:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o malloc_test
