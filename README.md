# _printf
###### Grabriel Blasina and Ignacio Gómez - 10/11/2022
This is our first group project at  Holberton School. This project is about an implementation of "printf" function. Our prototype (_printf) works the same as the original one (printf). This function recieves as paramethers a const char *format, a variadic list of arguments and return the number of characters printed.
```C
int _printf(const char *format, ...);
```
## Format Specifiers
| %  | Description  |
| ------------ | ------------ |
|  c |  Print single character |
|  s |  Print a string |
|  d |  Print a decimal (base 10) number |
|  i |  Print an integer in base 10 |
|  % |  Print a single percent sign |
|  '\0' | return -1 and print nothing|
|  othercase | printf a percent sign and the next character  |

## Files
- [_printf.c](https://github.com/jgnacio/holbertonschool-printf/_printf.c "_printf.c") - Main code.
- [RCL.c](https://github.com/jgnacio/holbertonschool-printf/blob/main/RCL.c "RCL.c") - file that returns function to be executed.
- [print_funct.c](https://github.com/jgnacio/holbertonschool-printf/blob/main/print_funct.c "print_funct.c") - File where functions are allocated.}
- [_putchar.c](https://github.com/jgnacio/holbertonschool-printf/blob/main/_putchar.c "_putchar.c") - File of function to print a single character.
- [main.h](https://github.com/jgnacio/holbertonschool-printf/blob/main/main.h "main.h") - File where prototypes of each function and structrure of identifier and functions are allocated.

## Flowchart _fprint
![printf_flowchart](https://user-images.githubusercontent.com/96546108/201151545-5dee2b2a-4228-4963-a6c2-d59d5e54a930.png)

## Flowchart RCL.c
![printf_flowchart](https://user-images.githubusercontent.com/96546108/201160533-92f15cca-f550-4df9-9d92-a8a7840007b3.png)

## Contributors
- [jgnacio](https://github.com/jgnacio "jgnacio")
- [Gabriel Blasina](https://github.com/gabrielblasina "Gabriel Blasina")
