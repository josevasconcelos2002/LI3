#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "users.h"

#define TABLE_SIZE  100  /*how much?*/

User *hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i = 0;i<TABLE_SIZE;i++) hash_table[i] = NULL;
}

bool valid_user(User *u){
    if(u == NULL) return false;
    if((strcmp(u->gender,"M") && strcmp(u->gender,"F") != 0) return false;
    if((strlen(u->birth_date) || strlen(u->account_creation)) != 10) return false;
    if(((strcmp(u->pay_method,"cash") && strcmp(u->pay_method,"credit_card") && strcmp(u->pay_method,"debit_card")) != 0)) return false;
    if(((strcmp(u->account_status,"active")) && strcmp(u->account_status,"inactive"))!= 0) return false;
    else return true;
}    
    
bool insert_user(User *u){
    if(valid_user(u) == true) {
        /*insere, se tudo de estiver conforme o esperado*/
        /*falta inserir*/     
    }
}  