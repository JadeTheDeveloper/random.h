#include <stdio.h>
#include "random.h"

/*
    * The first test program that has been added that demonstrates the use of the generateTrueRand function in random.h
*/

int main(){
    printf("This demo will demontrate how the truerand function works in the library.\n");
    printf("We have a varible that we named 'a'\n");
    int a;
    printf("We are going to assign it a value based off of the random function\n And we are now going to print that value.\n");
    a = generateTrueRand();
    printf("%d\n", a);
    return 0;
}