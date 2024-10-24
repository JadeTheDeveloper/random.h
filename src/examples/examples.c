#include <stdio.h>
#include "random.h"
#include <string.h>

int main(int argc, char* argv[]){


    if(strcmp(argv[0], "range")){
        printf("This demonstrates the generateRandomRange function\n");
        printf("We aren't using any varibles for this example. But I am going to call the function and print the number below\n");
        printf("%d\n", generateRandomRange(11));
    } else if(strcmp(argv[0], "true")){
        printf("This demo will demontrate how the truerand function works in the library.\n");
        printf("We have a varible that we named 'a'\n");
        int a;
        printf("We are going to assign it a value based off of the random function\n And we are now going to print that value.\n");
        a = generateTrueRand();
        printf("%d\n", a);
    } else {
        printf("./exampleProgram [args]\nrange: demonstrates the generateRandomRange function\ntrue: demonstrates the generateTrueRand function\n");
    }

    return 0;
}