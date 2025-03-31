# C - Variadic Functions

## Description
This project focuses on understanding and implementing variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments. The project explores the use of `va_list`, `va_start`, `va_arg`, and `va_end` macros along with the `const` keyword.

## Requirements
- All files compiled on Ubuntu 20.04 LTS using `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- Code must follow the Betty style guide
- No global variables allowed
- Maximum of 5 functions per file
- Only allowed C standard library functions are `malloc`, `free`, and `exit`
- Allowed macros: `va_start`, `va_arg`, `va_end`, and `va_copy`
- You are allowed to use `_putchar`

## Files and Functions

### 0-sum_them_all.c
- Function that returns the sum of all its parameters
- Prototype: `int sum_them_all(const unsigned int n, ...)`
- Returns 0 if `n == 0`

### 1-print_numbers.c
- Function that prints numbers followed by a new line
- Prototype: `void print_numbers(const char *separator, const unsigned int n, ...)`
- `separator` is the string to be printed between numbers
- If `separator` is NULL, don't print it

### 2-print_strings.c
- Function that prints strings followed by a new line
- Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`
- If a string is NULL, print `(nil)` instead
- If `separator` is NULL, don't print it

### 3-print_all.c
- Function that prints anything
- Prototype: `void print_all(const char * const format, ...)`
- Format specifiers:
  - `c`: char
  - `i`: integer
  - `f`: float
  - `s`: char * (if string is NULL, print (nil))
- Any other char should be ignored

## Header File
`variadic_functions.h` contains all function prototypes and necessary structures.

## Compilation Examples
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o sum
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o numbers