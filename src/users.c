#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "users.h"

#define TABLE_SIZE  1000  /*how much?*/

void init_hash_table(){
    User *users_hash_table[TABLE_SIZE];
    for(int i = 0;i<TABLE_SIZE;i++) users_hash_table[i] = NULL;
}

unsigned int hash(char *username){
    int length = strlen(username);
    unsigned int hash_value = 0;    // Hashtable key 
    for(int i = 0; i < length; i++){    // Cicle to randomize each name's key
        hash_value += username[i];
        hash_value = (hash_value * username[i]) % TABLE_SIZE; // % used to not make the key bigger than the table 
    }
    return hash_value;
}

void print_table_status(){
    printf("\t--START--\n");
    for(int i = 0; i < TABLE_SIZE; i++){
        if(hash_table[i] == NULL){
            printf("\t%i\t---\n",i);  
        } else{
            printf("\t%i\t",i);
            User *tmp = hash_table[i];
            while(tmp != NULL){
                printf("%s -> ", tmp->username);
                tmp = tmp->next;
            }
            printf("NULL\n");
        }   
    }
    printf("\t--END--\n");
}

// find a person in the table by their name
User *hash_table_lookup(char *username){
    int key = hash(username);
    User *tmp = hash_table[key];
    while(tmp != NULL && strcmp(tmp->username, username) != 0){
        tmp = tmp->next;
    }
    return tmp;
}

User *hash_table_delete(char *username){
    int key = hash(username);
    User *tmp = hash_table[key];
    User *prev = NULL;
    while(tmp != NULL && strcmp(tmp->username, username) != 0){
        prev = tmp;
        tmp = tmp->next;
    }
    if(tmp == NULL) return NULL;
    if(prev == NULL){
        // deleting the head of the hashtable
        hash_table[key] = tmp->next;
    } else {
        prev->next = tmp->next; // free tmp if using heap
    }
    return tmp;
}

bool valid_user(User *u){
    if(u == NULL) return false;
    if((strcmp(u->gender,"M") && strcmp(u->gender,"F") != 0)) return false;
    if((strlen(u->birth_date) || strlen(u->account_creation)) != 10) return false;
    if(((strcmp(u->pay_method,"cash") && strcmp(u->pay_method,"credit_card") && strcmp(u->pay_method,"debit_card")) != 0)) return false;
    if(((strcmp(u->account_status,"active")) && strcmp(u->account_status,"inactive"))!= 0) return false;
    else return true;
}    
    
bool insert_user(User *u){
    if(valid_user(u) == true) {
        int key = hash(u->username);
        u->next = hash_table[key]; // using a linked list to prevent colisions
        hash_table[key] = u;
        return true;  
    }
    else return false;
}  