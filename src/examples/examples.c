#include <stdio.h>
#include "random.h"


int main(int argc, char[] *argv){

    if(strcmp(argv[0], "range") == 0){
        printf("This demonstrates the generateRandomRange function\n");
        printf("We aren't using any varibles for this example. But I am going to call the function and print the number below\n");
        printf("%d\n", generateRandomRange(11));
    } else if(strcmp(argv[0], "true") == 0){
        printf("This demo will demontrate how the truerand function works in the library.\n");
        printf("We have a varible that we named 'a'\n");
        int a;
        printf("We are going to assign it a value based off of the random function\n And we are now going to print that value.\n");
        a = generateTrueRand();
        printf("%d\n", a);
    }

    return 0;
}