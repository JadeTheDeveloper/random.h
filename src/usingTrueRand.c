#include <stdio.h>
#include "random.h"


int main(){
    printf("This demo will utilize the generateTrueRand function in the random.h libary\n");
    printf("This code defines a varible named A \n");
    int A;
    printf("We can write the generateTrueRand function to generate a random number\n If all goes well then...\n");
    A = generateTrueRand();
    printf("%d\n", A);
    printf("We should see a random number!\n");
    return 0;
}