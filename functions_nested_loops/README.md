# C Functions and Nested Loops

## Resources

### Read or Watch:
- Nested while loops
- C - Functions
- Learning to Program in C (Part 06) (stop at 14:00)
- What is a function prototype (read only the “Function prototype paragraph”)
- What is the purpose of a function prototype?
- C - Header Files (stop before the “Once-Only Headers” paragraph)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- What are nested loops and how to use them.
- What is a function and how do you use functions.
- What is the difference between a declaration and a definition of a function.
- What is a prototype.
- Scope of variables.
- What are the gcc flags `-Wall -Werror -pedantic -Wextra -std=gnu89`.
- What are header files and how to use them with `#include`.

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`.
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All your files should end with a new line.
- A `README.md` file, at the root of the folder of the project, is mandatory.
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden.
- You are allowed to use `_putchar`.
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account.
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
- Don’t forget to push your header file.

## More Info

You do not have to understand the call by reference (address), stack, static variables, recursions, or arrays, yet.

## Tasks

### 0. _putchar
Write a program that prints `_putchar`, followed by a new line.
- Prototype: `int _putchar(char c);`
- The program should return `0`.

### 1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
Write a function that prints the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet(void);`
- You can only use `_putchar` twice in your code.

### 2. 10 x alphabet
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet_x10(void);`
- You can only use `_putchar` twice in your code.

### 3. islower
Write a function that checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase.
- Returns `0` otherwise.

### 4. isalpha
Write a function that checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter, lowercase or uppercase.
- Returns `0` otherwise.

### 5. Sign
Write a function that prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns `1` and prints `+` if `n` is greater than zero.
- Returns `0` and prints `0` if `n` is zero.
- Returns `-1` and prints `-` if `n` is less than zero.

### 6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you
Write a function that computes the absolute value of an integer.
- Prototype: `int _abs(int);`

### 7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important
Write a function that prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit.

### 8. I'm federal agent Jack Bauer, and today is the longest day of my life
Write a function that prints every minute of the day of Jack Bauer, starting from `00:00` to `23:59`.
- Prototype: `void jack_bauer(void);`

### 9. Learn your times table
Write a function that prints the 9 times table, starting with 0.
- Prototype: `void times_table(void);`

### 10. a + b
Write a function that adds two integers and returns the result.
- Prototype: `int add(int, int);`

### 11. 98 Battery Street, the OG
Write a function that prints all natural numbers from `n` to `98`, followed by a new line.
- Prototype: `void print_to_98(int n);`
- Numbers must be separated by a comma, followed by a space.
- Numbers should be printed in order.
- The first printed number should be the number passed to your function.
- The last printed number should be `98`.
- You are allowed to use the standard library.