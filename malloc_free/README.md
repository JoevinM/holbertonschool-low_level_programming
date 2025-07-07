📦 Dynamic Memory Allocation in C (malloc & free)
This repository contains C programs demonstrating dynamic memory allocation using malloc and memory deallocation with free. Each task focuses on common use-cases such as duplicating strings, creating arrays, and handling 2D grids.

📋 Tasks Overview

| Task # | Filename           | Function Prototype                               | Description                                                                                                           |
| ------ | ------------------ | ------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------- |
| 0      | `0-create_array.c` | `char *create_array(unsigned int size, char c);` | Creates an array of chars and initializes it with a specific character. Returns `NULL` if size is 0 or on failure.    |
| 1      | `1-strdup.c`       | `char *_strdup(char *str);`                      | Duplicates a given string into a newly allocated memory space. Returns `NULL` if `str` is `NULL` or on failure.       |
| 2      | `2-str_concat.c`   | `char *str_concat(char *s1, char *s2);`          | Concatenates two strings into new memory. Treats `NULL` as empty. Returns `NULL` on failure.                          |
| 3      | `3-alloc_grid.c`   | `int **alloc_grid(int width, int height);`       | Allocates a 2D array of integers initialized to 0. Returns `NULL` if dimensions are invalid or on allocation failure. |
| 4      | `4-free_grid.c`    | `void free_grid(int **grid, int height);`        | Frees a 2D grid previously created by `alloc_grid`.                                                                   |
