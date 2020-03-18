# _printf

### _printf project for Holberton School.

#### Project to recreate a version of printf from the standard library in C.

### _printf:
##### Produces output according to a specified format and writes output to std
out, the standard output stream.

### Conversion specifications covered:

#### '%':
##### A '%' is written. No argument is converted.

#### c:
##### The int argument is converted to an unsigned char, and the resulting charac
##### ter is written.

#### s:
##### The const char * argument is expected to be a pointer to an
##### array of character type (pointer to a string). Characters from
##### the array are written up to (but not including) a terminating
##### null byte ('\0').

#### d/i:
##### The int argument is converted to signed decimal notation.

#### b:
##### The int argument is converted to binary.

#### r:
##### Reverses a string argument and writes to stdout.

#### R:
##### Converts a string to Rot13.

#### u:
###### Converts an int to and unsigned int.

#### o:
##### Converts an int to octal.

### Compilation
##### Files are compiled with: gcc -Wall -Werror -Wextra -pedanctic '*.c'

## Authors
#### [Tahlia Roper](https://github.com/roundhousetally/) & [Ian Culp](https://gi
#### thub.com/icculp/)