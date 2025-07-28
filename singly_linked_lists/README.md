# 📚 Singly Linked Lists in C

## 📌 Table of Contents
- [🧠 Learning Objectives](#-learning-objectives)
- [⚙️ Requirements](#️-requirements)
- [🧱 Data Structure](#-data-structure)
- [📂 File Overview](#-file-overview)
- [🔧 Function Prototypes](#-function-prototypes)

---

## Learning Objectives

By the end of this project, you should be able to explain the following concepts **without using Google**:

- When and why to use **linked lists** vs **arrays**
- How to **build** and **manipulate** singly linked lists in C

---

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation will be done on **Ubuntu 20.04 LTS** with `gcc`, using:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
```

No use of global variables

Maximum 5 functions per file

Allowed standard library functions: malloc, free, exit, strdup

Disallowed functions: printf, puts, calloc, realloc, etc.

Code must follow the Betty coding style (betty-style.pl and betty-doc.pl)

All files must end with a new line

A README.md at the root of the project is mandatory

You may use _putchar (no need to push _putchar.c)

You don’t need to push your test main.c files; we’ll use our own to compile.

---

## Data Structure

```bash
/**
 * struct list_s - singly linked list node structure
 * @str: string (malloc'ed and duplicated)
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: node of a singly linked list
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
---

## File Overview

| File Name          | Function Name  | Description                                                 |
| ------------------ | -------------- | ----------------------------------------------------------- |
| `0-print_list.c`   | `print_list`   | Prints all elements of a `list_t` list                      |
| `1-list_len.c`     | `list_len`     | Returns the number of elements in a `list_t` list           |
| `2-add_node.c`     | `add_node`     | Adds a new node at the **beginning** of the list            |
| `3-add_node_end.c` | `add_node_end` | Adds a new node at the **end** of the list                  |
| `4-free_list.c`    | `free_list`    | Frees all nodes in the list                                 |
| `lists.h`          | —              | Contains all function prototypes and the `list_t` structure |

---

## Function Prototypes

```bash
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
```