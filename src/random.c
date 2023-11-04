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


void free_int_obj_used(int var){

    /*  
        * The most advanced object on this list, chances are, this is poorly written, garbage code :( 
        ! I would not recomend using this function until it has been properly tested and written out better.
    */

   if (var != var /*(potentially) uneeded panic condition*/) {
    exit(1);
   }

    free(&var);

}