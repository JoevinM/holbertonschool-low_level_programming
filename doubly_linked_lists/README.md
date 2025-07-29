# Doubly Linked Lists in C

---

## Table of Contents
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Data Structure](#data-structure)
- [File Overview and prototypes](#file-overview-and-prototypes)
- [Function Prototypes](#function-prototypes)

---

## Learning Objectives

- Understand the structure and usage of a doubly linked list.
- Gain experience manipulating pointers.
- Learn how to dynamically allocate memory in C.
- Practice following the **Betty coding style**.
- Reinforce list traversal (forward and backward) using `next` and `prev` pointers.

---

## Requirements

Allowed editors: vi, vim, emacs

All code will be compiled on Ubuntu 20.04 LTS using gcc

Only allowed functions: malloc, free, printf, exit

No use of global variables

No more than 5 functions per file

All header files must be protected with include guards

Betty coding style must be respected

---

## Data Structure

```c
/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```
---
## File Overview and Prototypes

| File                   | Function Name              | Prototype                                                                        | Description                       |
| ---------------------- | -------------------------- | -------------------------------------------------------------------------------- | --------------------------------- |
| 0-print\_dlistint.c    | `print_dlistint`           | `size_t print_dlistint(const dlistint_t *h);`                                    | Prints all elements of the list   |
| 1-dlistint\_len.c      | `dlistint_len`             | `size_t dlistint_len(const dlistint_t *h);`                                      | Returns the number of elements    |
| 2-add\_dnodeint.c      | `add_dnodeint`             | `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`                      | Adds a node at the beginning      |
| 3-add\_dnodeint\_end.c | `add_dnodeint_end`         | `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`                  | Adds a node at the end            |
| 4-free\_dlistint.c     | `free_dlistint`            | `void free_dlistint(dlistint_t *head);`                                          | Frees the entire list             |
| 5-get\_dnodeint.c      | `get_dnodeint_at_index`    | `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`       | Gets the node at given index      |
| 6-sum\_dlistint.c      | `sum_dlistint`             | `int sum_dlistint(dlistint_t *head);`                                            | Sums all the elements of the list |
| 7-insert\_dnodeint.c   | `insert_dnodeint_at_index` | `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);` | Inserts a node at given index     |
| 8-delete\_dnodeint.c   | `delete_dnodeint_at_index` | `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`           | Deletes a node at given index     |

---
