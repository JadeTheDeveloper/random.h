#include <stdio.h>
#include "random.h"


int main(){
    printf("This demonstrates the generateRandomRange function\n");
    printf("We aren't using any varibles for this example. But I am going to call the function and print the number below\n");
    printf("%d\n", generateRandomRange(11));
    return 0;
}