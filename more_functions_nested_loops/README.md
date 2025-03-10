# C - More Functions, More Nested Loops

## Resources

Read or watch the following resources:

- [Nested while loops](https://www.youtube.com/watch?v=1MnZ9gzyhB8)
- [C - Functions](https://www.youtube.com/watch?v=s2yEl8DN3Xs)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=K63vFVqAGmo) (stop at 14:00)
- [What is the purpose of a function prototype?](https://www.youtube.com/watch?v=QfHbfgFbpyw)
- [C - Header Files](https://www.youtube.com/watch?v=ndxlQspjskY) (stop before the “Once-Only Headers” paragraph)

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to use them with `#include`

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc., is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do, it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Tasks

### 0. isupper
- **Score**: 100.00%  
- **Prototype**: `int _isupper(int c);`
- **Description**: Write a function that checks for uppercase characters.  
- **Returns**:  
  - 1 if `c` is uppercase  
  - 0 otherwise  

### 1. isdigit
- **Score**: 100.00%  
- **Prototype**: `int _isdigit(int c);`
- **Description**: Write a function that checks for a digit (0 through 9).  
- **Returns**:  
  - 1 if `c` is a digit  
  - 0 otherwise  

### 2. Collaboration is multiplication
- **Score**: 100.00%  
- **Prototype**: `int mul(int a, int b);`
- **Description**: Write a function that multiplies two integers.

### 3. The numbers speak for themselves
- **Score**: 100.00%  
- **Prototype**: `void print_numbers(void);`
- **Description**: Write a function that prints the numbers, from 0 to 9, followed by a new line.  
- **Note**: You can only use `_putchar` twice in your code.

### 4. I believe in numbers and signs
- **Score**: 100.00%  
- **Prototype**: `void print_most_numbers(void);`
- **Description**: Write a function that prints the numbers, from 0 to 9, excluding 2 and 4.

### 5. Numbers constitute the only universal language
- **Score**: 100.00%  
- **Prototype**: `void more_numbers(void);`
- **Description**: Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.  
- **Note**: You can only use `_putchar` three times in your code.

### 6. The shortest distance between two points is a straight line
- **Score**: 100.00%  
- **Prototype**: `void print_line(int n);`
- **Description**: Write a function that draws a straight line in the terminal.  
- **Note**: The line should end with a `\n`. If `n` is 0 or less, the function should only print a new line.

### 7. I feel like I am diagonally parked in a parallel universe
- **Score**: 100.00%  
- **Prototype**: `void print_diagonal(int n);`
- **Description**: Write a function that draws a diagonal line on the terminal.  
- **Note**: The diagonal should end with a `\n`. If `n` is 0 or less, the function should only print a new line.

### 8. You are so much sunshine in every square inch
- **Score**: 100.00%  
- **Prototype**: `void print_square(int size);`
- **Description**: Write a function that prints a square, followed by a new line.  
- **Note**: You can only use `_putchar` to print.

### 9. Fizz-Buzz
- **Score**: 100.00%  
- **Description**: Write a program that prints the numbers from 1 to 100, followed by a new line.  
  - For multiples of three print `Fizz` instead of the number  
  - For multiples of five print `Buzz`  
  - For numbers which are multiples of both three and five print `FizzBuzz`

### 10. Triangles
- **Score**: 100.00%  
- **Prototype**: `void print_triangle(int size);`
- **Description**: Write a function that prints a triangle, followed by a new line.  
- **Note**: You can only use `_putchar` to print the triangle.