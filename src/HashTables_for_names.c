#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct person{
    char name[MAX_NAME];
    int age;
    //...add other stuff later, maybe
    struct person *next;
}Person;

Person *hash_table[TABLE_SIZE]; // hash_table is an array with "TABLE_SIZE" pointer's to the Person struct

unsigned int hash(char *name){
    int length = strlen(name);
    unsigned int hash_value = 0;    // Hashtable key 
    for(int i = 0; i < length; i++){    // Cicle to randomize each name's key
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE; // % used to not make the key bigger than the table 
    }
    return hash_value;
}

void init_hash_table(){
    for(int i = 0; i < TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
    // table is empty
}

void print_table_status(){
    printf("\t--START--\n");
    for(int i = 0; i < TABLE_SIZE; i++){
        if(hash_table[i] == NULL){
            printf("\t%i\t---\n",i);  
        } else{
            printf("\t%i\t",i);
            Person *tmp = hash_table[i];
            while(tmp != NULL){
                printf("%s -> ", tmp->name);
                tmp = tmp->next;
            }
            printf("NULL\n");
        }   
    }
    printf("\t--END--\n");
}

bool hash_table_insert(Person *p){
    if(p == NULL) return false;
    int key = hash(p->name);
    p->next = hash_table[key]; // using a linked list to prevent colisions
    hash_table[key] = p;
    return false;
}

// find a person in the table by their name
Person *hash_table_lookup(char *name){
    int key = hash(name);
    Person *tmp = hash_table[key];
    while(tmp != NULL && strcmp(tmp->name, name) != 0){
        tmp = tmp->next;
    }
    return tmp;
}

Person *hash_table_delete(char *name){
    int key = hash(name);
    Person *tmp = hash_table[key];
    Person *prev = NULL;
    while(tmp != NULL && strcmp(tmp->name, name) != 0){
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

int main(int argv, char **argc){

    init_hash_table();
    print_table_status();

    Person jacob = {.name = "Jacob", .age = 16};
    Person kate = {.name = "Kate", .age = 22};
    Person mpho = {.name = "Mpho", .age = 52};
    Person sarah = {.name = "Sarah", .age = 28};
    Person edna = {.name = "Edna", .age = 38};
    Person maren = {.name = "Maren", .age = 42};
    Person eliza = {.name = "Eliza", .age = 88};
    Person robert = {.name = "Robert", .age = 13};
    Person jane = {.name = "Jane", .age = 66};

    hash_table_insert(&jacob);
    hash_table_insert(&kate);
    hash_table_insert(&mpho);
    hash_table_insert(&sarah);
    hash_table_insert(&edna);
    hash_table_insert(&maren);
    hash_table_insert(&eliza);
    hash_table_insert(&robert);
    hash_table_insert(&jane);
    print_table_status();

    Person *tmp = hash_table_lookup("Mpho");
    if(tmp == NULL){
        printf("Not found!\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }

    tmp = hash_table_lookup("George");
    if(tmp == NULL){
        printf("Not found!\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }

    hash_table_delete("Mpho");
    tmp = hash_table_lookup("Mpho");
    if(tmp == NULL){
        printf("Not found!\n");
    }
    else{
        printf("Found %s.\n", tmp->name);
    }

    /*printf("Jacob => %u\n", hash("Jacob"));
    printf("Natalie => %u\n", hash("Natalie"));
    printf("Sara => %u\n", hash("Sara"));
    printf("Mpho => %u\n", hash("Mpho"));
    printf("Tebogo => %u\n", hash("Tebogo"));
    printf("Ron => %u\n", hash("Ron"));
    printf("Jane => %u\n", hash("Jane"));
    printf("Maren => %u\n", hash("Maren"));
    printf("Bill => %u\n", hash("Bill"));*/
    return 0;
}
