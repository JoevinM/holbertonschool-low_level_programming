# Argument Handling in C

This repository contains several C programs demonstrating how to handle command-line arguments (`argc` and `argv[]`). Each program corresponds to a specific task and showcases different ways to interact with user inputs via the command line.

---

## Table of Contents

| Task # | Filename            | Description                                                                                     |
|--------|---------------------|-------------------------------------------------------------------------------------------------|
| 0      | `0-whatsmyname.c`   | Prints the name of the program (including its path).                                            |
| 1      | `1-args.c`          | Prints the number of arguments passed to the program.                                           |
| 2      | `2-args.c`          | Prints all arguments received, one per line (including the program name).                      |
| 3      | `3-mul.c`           | Multiplies two arguments and prints the result. If not exactly two, prints `Error`.            |
| 4      | `4-add.c`           | Adds all positive numbers passed as arguments. Prints `Error` if any input is non-numeric.     |

---

## Compilation

To compile each program, use `gcc`:

```bash
gcc filename.c -o output_name
