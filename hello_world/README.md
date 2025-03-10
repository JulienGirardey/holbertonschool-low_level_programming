# C Programming Project - Low Level Programming

## Project Overview

This project is focused on introducing you to the basics of C programming, using tools like `gcc` to compile C code, and understanding the assembly code, pre-processing, and various C programming practices.

The goal of this project is to help you understand fundamental concepts of C programming and how to manage compiling, linking, and debugging your code.

## Learning Resources

To get started, you'll need to go through the following resources:

- **Everything you need to know to start with C.pdf**  
  (Read it entirely, but you don't need to learn everything at once)
  
- **Dennis Ritchie**  
  (Creator of C programming language)

- **“C” Programming Language: Brian Kernighan**  
  (Important book for understanding C)

- **Why C Programming Is Awesome**  
  (Learn why C is such a powerful language)

- **Learning to program in C Part 1 & Part 2**  
  (Great introductory materials)

- **Understanding C program Compilation Process**  
  (Important for understanding how code is compiled)

- **Betty Coding Style**  
  (Ensure your code follows proper style standards)

- **Linus Torvalds on C vs. C++**  
  (Watch this after the above resources)

### Commands to Know

- **gcc** (GNU Compiler Collection)
- **printf(3)** (For printing output)
- **puts** (Alternative to `printf`)
- **putchar** (Used for character output)

## Project Goals

By the end of this project, you should be able to answer the following:

- Why is C programming awesome?
- Who invented C and who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds?
- What happens when you type `gcc main.c`?
- What is the entry point of a C program, and how does `main` function play a role in it?
- How do you print text using `printf`, `puts`, and `putchar`?
- What is the size of a specific type using `sizeof` operator?
- How to compile using `gcc` and manage compilation errors and warnings?
- What is the official C coding style, and how can you check your code with the `betty-style` tool?

## Requirements

- **C** programming language
- Allowed editors: `vi`, `vim`, `emacs`
- The project will be compiled on **Ubuntu 20.04 LTS** using **gcc** with specific options:
    - `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files must end with a new line.
- A **README.md** file must be present at the root of the repository.
- Code should be error-free during compilation.
- You are not allowed to use `system`.
- Follow the **Betty style** guidelines.

### Shell Scripts

- All shell scripts will be tested on **Ubuntu 20.04 LTS**.
- All your scripts should be **exactly two lines long** (`wc -l` should print 2).
- The first line of all shell scripts should be exactly `#!/bin/bash`.

## Betty Linter

To use the Betty linter, you need to set it up on your local machine:

1. Clone the [Betty repository](https://github.com/holbertonschool/Betty).
2. Run the following commands to install the linter:
   ```bash
   cd betty
   sudo ./install.sh