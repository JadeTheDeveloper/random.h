#include <stdio.h>
#include "random.h"


int main(){
    int maximum;

    printf("This function called generateRandomRange in the random.h libary generates a random number based off a range.\n");
    printf("if all is right, we should get a random number between 1 and 10\n ");
    printf("%d\n", generateRandomRange(11));
    return 0;
}