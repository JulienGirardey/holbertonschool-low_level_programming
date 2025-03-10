# Pointers, Arrays, and Strings Project

## Resources
- **C - Arrays**
- **C - Pointers**
- **C - Strings**
- **Memory Layout**

## Learning Objectives
At the end of this project, you should be able to explain:
- What pointers are and how to use them
- What arrays are and how to use them
- Differences between pointers and arrays
- How to use and manipulate strings
- Scope of variables

## Requirements
- **Editors**: Allowed editors: vi, vim, emacs
- **Compilation**: All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- **New Line**: All files must end with a new line
- **Betty Style**: Code must adhere to the Betty style and be checked with `betty-style.pl` and `betty-doc.pl`
- **Global Variables**: Global variables are not allowed
- **Functions per File**: No more than 5 functions per file
- **Standard Library**: Standard library functions like `printf`, `puts`, etc., are forbidden
- **_putchar**: Allowed to use `_putchar` function, but do not push `_putchar.c` as it will be provided
- **Header File**: Prototypes of all functions and `_putchar` must be in `main.h`
- **Testing**: Main files are provided for testing, but you don’t need to push them

## Tasks

### 0. 98 Battery st.
Write a function that takes a pointer to an `int` as a parameter and updates the value it points to to 98.

### 1. Don't swap horses in crossing a stream
Write a function that swaps the values of two integers.

### 2. This report, by its very length, defends itself against the risk of being read
Write a function that returns the length of a string.

### 3. I do not fear computers. I fear the lack of them
Write a function that prints a string, followed by a new line.

### 4. I can only go one way. I've not got a reverse gear
Write a function that prints a string in reverse, followed by a new line.

### 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
Write a function that reverses a string.

### 6. Half the lies they tell about me aren't true
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

### 7. Winning is only half of it. Having fun is the other half
Write a function that prints half of a string, followed by a new line. If the number of characters is odd, print the last `n` characters.

### 8. Arrays are not pointers
Write a function that prints `n` elements of an array of integers, followed by a new line. Numbers should be separated by commas and a space.

### 9. strcpy
Write a function that copies the string pointed to by `src` to the buffer pointed to by `dest`.

### 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
Write a function that converts a string to an integer, considering all signs before the number.

## Compilation and Testing

All files will be compiled using the following command:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <your_files>.c -o <your_output_file>