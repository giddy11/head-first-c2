## atoi in C Programming
The `atoi` function in C programming is used to convert a string of characters representing an integer value into an actual integer type. The function takes one argument, which is the string to be converted.

#### Syntax:
```c 
    int atoi(const char *str);
```
#### Parameters:
+ **str** : The string to be converted to an interger.

#### Return Value:
The `atoi` function returns the integer representation of the input string.

## strtol in C Programming
The `strtol` function in C programming is used to convert a string of characters representing an integer value into an actual integer type, similar to `atoi`. However, `strtol` provides many more features and can handle a wider range of inputs.

#### Syntax:
```c 
    long int strtol(const char *str, char **endptr, int base);
```
#### Parameters:
+ **str** : The string to be converted to an integer.
+ **endptr** : A pointer to the character after the last character used in the conversion. This value can be used to determine if any non-numeric characters were present in the input string.
+ **base** :  The numerical base to be used for the conversion (i.e. decimal, binary, hex).

#### Return Value:
The `strtol` function returns the long integer representation of the input string. Additionally, it sets `endptr` to point to the first non-numeric character in the input string, or the end of the string if all characters were numeric. If the input string does not contain any valid numbers, `strtol` returns 0.
