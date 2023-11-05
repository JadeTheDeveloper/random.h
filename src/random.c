#include "random.h"


int generateTrueRand(){
    /* This function generates a "true" random, with the default RAND_MAX value*/
    time_t t;

    srand((unsigned) time(&t));

    return rand();
}

int generateRandomRange(int  max){
    /* Does the same thing as generateTrueRand, but with a RAND_MAX that's set by the max varible*/
    time_t t;
    
    // TODO: Add support for scanf integers so that the user wont have to cobble together a solution.

    srand((unsigned) time(&t));

    return rand() % max;
}
