# random.h

This library was made with the sole intention of me fixing some of the gripes I had with C.
As someone who came from more verbose languages like Java, some parts of C I wanted to fix on my own to create my image of an ideal, multi perpous language.
If you want to use this in prod code, go ahead, but this is just a hobbyist project.

# Functions in the header file
True random number generation
``` C
int generateTrueRand()
```
This function does basically what it's supposed to do, using the rand() function in C but without any paramiters. This function also initiates Srand automatically so you shouldn't have to do anything with that :)

```C
int generateRandomRange(int max);
```
This shortshands the code below
```C
    time_t t;
    

    srand((unsigned) time(&t));

    printf("%d\n", rand() % max);
```
Into a nice little statement that's easier on the eyes and dosen't clutter up your code. This is supposed to immitate python's random.randrange function.

# DISCLAIMERS AND MISSING FUNCTIONALITY
THIS IS IN NO WAY MENT TO BE USED WITH PRODUCTION CODE. Seriously, this has a lot of missing functionality that I need to add later. 
This library with the way the makefile is going to be written, only works on Linux with the GCC(GNU Compiler Collection) using the /usr/local/include directory.
Sorry Wind# random.h

This library was made with the sole intention of me fixing some of the gripes I had with C.
As someone who came from more verbose languages like Java, some parts of C I wanted to fix on my own to create my image of an ideal, multi perpous language.
If you want to use this in prod code, go ahead, but this is just a hobbyist project.

# Functions in the header file
True random number generation
``` C
int generateTrueRand()
```
This function does basically what it's supposed to do, using the rand() function in C but without any paramiters. This function also initiates Srand automatically so you shouldn't have to do anything with that :)

```C
int generateRandomRange(int max);
```
This shortshands the code below
```C
    time_t t;
    

    srand((unsigned) time(&t));

    printf("%d\n", rand() % max);
```
Into a nice little statement that's easier on the eyes and dosen't clutter up your code. This is supposed to immitate python's random.randrange function.

# DISCLAIMERS AND MISSING FUNCTIONALITY
THIS IS IN NO WAY MENT TO BE USED WITH PRODUCTION CODE. Seriously, this has a lot of missing functionality that I need to add later. 
This library with the way the makefile is going to be written, only works on Linux with the GCC(GNU Compiler Collection) using the /usr/local/include directory.
Sorry Windows + MacOS users :(
