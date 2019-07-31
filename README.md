# _printf
## Description

This function was created to simulate most of the options and flags performed by the original printf function provided in the standard library <stdio.h>

### Conversion specifiers
| Conversion specifier | What does it do? |
| -------------------- | ---------------- |
| d, i  | converts argument into decimal and integer |
| b     | converts unsigned int into binary |
| c     | int argument is converted to an unsigned char |
| s     | the string will be written up to the null character |
| o     | converts decimal into unsigned octal |
| u     | converts argument into unsigned integer |

### Further information
For further information please refer to [Man-page for this project](./man_3_printf) 

### Requirements 📋

_Basic knowledge about C programming language_
_Basic knowledge about shell and linux_
_A text editor software_

### Built with 
* C programming language

### Operation 🔧

_The correct way to use the _printf function it's very easy, just put the following line inside your C program:_


```
i.e. _printf("Character:[%c]\n", 'H');
     _printf("String:[%s]\n", "I am a string !");
```

_After proccess and compile your files, your output will look like this:_

```
Character:[H]
String:[I am a string !]
```
## Version 📌
_ _printf function - version 9.6 _ 

### Authors 
* Javier Cañon - @untaljacko
* Laura Peralta V - @LauraPeraltaV85

### Acknowledgements
* All the peers that contributed with their knowledge

### A final note:
_ For all the unknown terms, concepts, and that you find in this project, please... Google them.... and RTFM._ 
