#include <stdio.h>
#include "queries.h"

FILE q1(FILE queries){

}

FILE q2(FILE queries){

}


queries(const *char file_name){
    FILE *queries;
    int q;
    open = fopen(file_name,"r");
    fscanf(queries,"%d",q);
    if(q==1) q1(queries);
    else if(q==2) q2(queries);
    

    fclose(queries); 
}