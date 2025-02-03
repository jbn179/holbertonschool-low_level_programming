# 📂 Command Line Arguments (argc and argv)

![C](https://img.shields.io/badge/C-Programming-blue.svg)
![Progress](https://img.shields.io/badge/Progress-Intermediate-yellow.svg)

## 📖 Description
This directory contains C programs that demonstrate the use of command line arguments (`argc` and `argv`). The goal is to provide a comprehensive understanding of how to handle command line inputs in C programs. Each program is designed to be simple and easy to understand, making them ideal for learners who are looking to deepen their knowledge of command line arguments in C.

### Key Concepts Covered:
- **argc and argv**: Learn how to use `argc` (argument count) and `argv` (argument vector) to handle command line inputs.
- **Parsing Arguments**: Understand how to parse and use command line arguments in your programs.
- **Error Handling**: Implement error handling for invalid or missing command line arguments.

## 📂 Contents
- **0-whatsmyname.c**: Prints the program's name.
- **1-args.c**: Prints the number of arguments passed to the program.
- **2-args.c**: Prints all arguments it receives.
- **3-mul.c**: Multiplies two numbers passed as arguments.
- **4-add.c**: Adds positive numbers passed as arguments.
- **100-args.c**: Prints the minimum number of coins to make change for an amount of money.

## 🚀 Getting Started
1. Clone the repository to access the materials:
   ```bash
   git clone https://github.com/username/holbertonschool-low_level_programming.git
   ```
2. Navigate to the `argc_argv` directory:
   ```bash
   cd holbertonschool-low_level_programming/argc_argv
   ```
3. Compile and run the C programs:
   ```bash
   gcc -Wall -Wextra -Werror -pedantic 0-whatsmyname.c -o whatsmyname
   ./whatsmyname
   ```

## 🛠️ Requirements
• GCC compiler for C programs  
• Linux or macOS environment (recommended)

## Examples

### 0-whatsmyname.c
Prints the program's name:
```c
#include <stdio.h>

/**
 * main - Prints the program's name.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", argv[0]);
    return (0);
}
```
Run:
```bash
./whatsmyname
# Output: ./whatsmyname
```

### 1-args.c
Prints the number of arguments passed to the program:
```c
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);
    return (0);
}
```
Run:
```bash
./args one two three
# Output: 3
```

### 2-args.c
Prints all arguments it receives:
```c
#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
```
Run:
```bash
./args one two three
# Output:
# ./args
# one
# two
# three
```

### 3-mul.c
Multiplies two numbers passed as arguments:
```c
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
    int num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    printf("%d\n", num1 * num2);
    return (0);
}
```
Run:
```bash
./mul 3 4
# Output: 12
```

### 4-add.c
Adds positive numbers passed as arguments:
```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (1);
            }
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (0);
}
```
Run:
```bash
./add 1 2 3
# Output: 6
```

### 100-args.c
Prints the minimum number of coins to make change for an amount of money:
```c
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 if successful, 1 if not.
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    cents = atoi(argv[1]);

    while (cents > 0)
    {
        if (cents >= 25)
            cents -= 25;
        else if (cents >= 10)
            cents -= 10;
        else if (cents >= 5)
            cents -= 5;
        else if (cents >= 2)
            cents -= 2;
        else
            cents -= 1;
        coins++;
    }
    printf("%d\n", coins);
    return (0);
}
```
Run:
```bash
./args 99
# Output: 9
```

## License
![License](https://img.shields.io/badge/License-MIT-green.svg)  
This project is under the MIT License.

## Author
Benjamin Ristord - [@jbn179](https://github.com/jbn179)