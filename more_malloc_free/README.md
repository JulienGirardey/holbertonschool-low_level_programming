# More Malloc, Free

## Resources

Read or watch:
- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc)

Man pages or help:
- `exit (3)`
- `calloc`
- `realloc`

## Learning Objectives

At the end of this project, you should be able to explain the following concepts without using Google:

### General
- How to use the `exit` function.
- What are the functions `calloc` and `realloc` from the standard library and how to use them.

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS** using `gcc` with the following options:
  ```sh
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Code should follow the **Betty style**, checked using `betty-style.pl` and `betty-doc.pl`.
- No use of global variables is allowed.
- No more than **5 functions per file**.
- The only allowed C standard library functions are `malloc`, `free`, and `exit`.
- **The use of `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.**
- The function `_putchar` can be used.
- Do not push `_putchar.c` (it will not be considered).
- All function prototypes should be included in a header file named `main.h`.
- The `main.h` file must be pushed to the repository.

## Tasks

### 0. Trust no one
**File:** `0-malloc_checked.c`
- Write a function that allocates memory using `malloc`.
- **Prototype:** `void *malloc_checked(unsigned int b);`
- Returns a pointer to the allocated memory.
- If `malloc` fails, the function causes normal process termination with a status value of **98**.

### 1. string_nconcat
**File:** `1-string_nconcat.c`
- Write a function that concatenates two strings.
- **Prototype:** `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- The returned pointer should point to a newly allocated space in memory containing `s1`, followed by the first `n` bytes of `s2`, and null-terminated.
- If `n` is greater than or equal to the length of `s2`, use the entire `s2`.
- If `NULL` is passed, treat it as an empty string.
- If function fails, return `NULL`.

### 2. _calloc
**File:** `2-calloc.c`
- Write a function that allocates memory for an array using `malloc`.
- **Prototype:** `void *_calloc(unsigned int nmemb, unsigned int size);`
- The function allocates memory for an array of `nmemb` elements of `size` bytes each and initializes all bytes to zero.
- If `nmemb` or `size` is `0`, return `NULL`.
- If `malloc` fails, return `NULL`.

### 3. array_range
**File:** `3-array_range.c`
- Write a function that creates an array of integers.
- **Prototype:** `int *array_range(int min, int max);`
- The array should contain all values from `min` to `max`, inclusive, in ascending order.
- If `min` is greater than `max`, return `NULL`.
- If `malloc` fails, return `NULL`.

## Repository Information

- **GitHub repository:** `holbertonschool-low_level_programming`
- **Directory:** `more_malloc_free`

---

This project is part of the Holberton School low-level programming curriculum.