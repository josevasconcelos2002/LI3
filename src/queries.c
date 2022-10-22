#include <stdio.h>
#include "queries.h"
q1(){

}
q2(){

}


queries(const *char file_name){
    FILE *queries;
    open = fopen(queries,"r");
    /*1º elemento da 1ª linha for = 1*/ q1(queries);
    /*1º elemento da 2ª linha for = 2*/ q2(queries);
    /* ... */

    fclose(queries); 
}