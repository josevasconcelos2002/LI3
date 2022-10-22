#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "drivers.h"

#define TABLE_SIZE 100 /*how much?*/

Driver *hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i = 0;i<TABLE_SIZE;i++) hash_table[i] = NULL;
}

bool valid_driver(Driver *d){
    if(d == NULL) return false;
    if((strcmp(d->gender,"M") && strcmp(d->gender,"F") != 0) return false;
    if(strlen(d->birth_date) != 10) return false;
    if((strlen(d->license_plate != 8) return false;
    if((strlen(d->account_creation) || strlen(d->account_creation)) != 10) return false;
    if(((strcmp(d->car_class,"basic") && strcmp(d->car_class,"green") && strcmp(d->car_class,"premium")) != 0)) return false;
    if(((strcmp(d->account_status,"active")) && strcmp(d->account_status,"inactive"))!= 0) return false; 
    else return true;
}


bool insert_driver(Driver *d){
    if(valid_user(d)){
        /*insere, se tudo de estiver conforme o esperado*/
        /*falta inserir*/
    }
}