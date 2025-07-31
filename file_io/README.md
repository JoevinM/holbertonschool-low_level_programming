# File I/O Project

## Description

This project involves creating several C functions and a program to handle file input/output operations using POSIX system calls (`open`, `read`, `write`, `close`).  
You will implement functions to read, create, append, and copy files while respecting specific constraints and error handling.

---

## Table of Contents

- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [File Overview and Prototypes](#file-overview-and-prototypes)
- [Function Prototypes](#function-prototypes)
- [Compilation](#compilation)

---

## Learning Objectives

- Learn how to create, open, read, write and close files using system calls.
- Understand what file descriptors are and how to use them.
- Know the 3 standard file descriptors: stdin, stdout, stderr, and their POSIX names.
- Master the use of `open`, `close`, `read` and `write` system calls.
- Learn about file access flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
- Understand file permissions and how to set them when creating files.
- Understand the difference between system calls and library functions.
- Practice writing clean C code following Betty style.

---

## Requirements

- Use only allowed syscalls: `read`, `write`, `open`, `close`
- Allowed C standard library functions: `malloc`, `free`, `exit`
- No use of `printf`, `puts`, `calloc`, `realloc`, etc.
- Use `_putchar` if needed (provided by the evaluator)
- Code must follow Betty style (checked with `betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- No more than 5 functions per file
- All files compiled on Ubuntu 20.04 LTS with:

  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```

- All header files must have include guards
- Function prototypes must be in main.h
- Use symbolic constants (POSIX) instead of magic numbers when relevant (e.g. STDIN_FILENO vs 0)

---

## File Overview and Prototypes

| File             | Function Name           | Prototype                                                           | Description                                    |
|------------------|------------------------|---------------------------------------------------------------------|------------------------------------------------|
| `0-read_textfile.c` | `read_textfile`          | `ssize_t read_textfile(const char *filename, size_t letters);`       | Reads and prints a file to stdout up to letters |
| `1-create_file.c`   | `create_file`            | `int create_file(const char *filename, char *text_content);`         | Creates a file with permissions rw-------       |
| `2-append_text.c`   | `append_text_to_file`    | `int append_text_to_file(const char *filename, char *text_content);` | Appends text at the end of a file               |
| `3-cp.c`            | `main`                   | `int main(int argc, char *argv[]);`                                 | Copies the content of one file to another       |
| `main.h`            | —                        | Prototypes of all functions and `_putchar`                          | Header file                                     |

---
## Function Prototypes

```c
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int _putchar(char c);
```

---

## Compilation

Compile all files with:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_program
```

---


