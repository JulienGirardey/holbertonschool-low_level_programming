# C - Function Pointers

## Description
This project explores function pointers in C programming. Function pointers allow storing and passing functions as parameters to other functions, enabling more flexible and dynamic programming approaches.

## Requirements
- All files compiled on Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code must follow the Betty style guide
- No global variables allowed
- Maximum of 5 functions per file
- Only allowed C standard library functions are `malloc`, `free`, and `exit`
- You are allowed to use `_putchar`
- The prototypes of all functions should be included in header file `function_pointers.h`

## Files and Functions

### 0-print_name.c
- Function that prints a name
- Prototype: `void print_name(char *name, void (*f)(char *))`
- Function pointer `f` points to the function that will format and print the name

### 1-array_iterator.c
- Function that executes a function given as a parameter on each element of an array
- Prototype: `void array_iterator(int *array, size_t size, void (*action)(int))`
- `size` is the size of the array
- `action` is a pointer to the function to be executed on each element

### 2-int_index.c
- Function that searches for an integer
- Prototype: `int int_index(int *array, int size, int (*cmp)(int))`
- `size` is the number of elements in the array
- `cmp` is a pointer to the function used to compare values
- Returns index of first element for which `cmp` function does not return 0
- Returns -1 if no element matches or if size <= 0

### 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
A program that performs simple operations:
- Usage: `calc num1 operator num2`
- Operators: +, -, *, /, %
- Result of operation is followed by a new line
- `3-calc.h`: Contains all function prototypes and data structures
- `3-op_functions.c`: Contains the 5 operation functions
- `3-get_op_func.c`: Contains function pointer that selects correct operation
- `3-main.c`: Contains main function

## Header File
`function_pointers.h` contains all necessary function prototypes

## Compilation Examples
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o print_name
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o array_iterator
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o int_index
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc