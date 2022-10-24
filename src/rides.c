#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "rides.h"
#include "drivers.c"
#include "users.c"

#define TABLE_SIZE 100 /*how much?*/

Ride *hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i = 0;i<TABLE_SIZE;i++) hash_table[i] = NULL;
}

bool valid_ride(Ride *r){
    if(r == NULL) return false;
    if((valid_driver(r->driver) || valid_user(r->user)) == false) return false;
    if(strlen(r->date) != 10) return false;
    if(r->distance <= 0) return false;
    if(r->tip < 0) return false;
    if(r->score_driver < 0) return false;
    if(r->score_user < 0) return false;
    else return true;
}    
    
    
bool insert_ride(Ride *r){
    if(valid_ride(Ride *r)){
        /*falta inserir*/        
    }
}    