#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "drivers.h"

#define TABLE_SIZE 100 /*how much?*/

/*retorna a hashtable resultante?*/User *parse(const char* file_name){
    FILE *file;
    FILE* open = fopen(file_name,"r");
    if(file_name = "drivers.csv"){
        Driver d;
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
        while((fscanf(file,"%d;%s;%s;%s;%s;%s;%s\n",&d.id,&d.name,&d.birth_date,&d.gender,&d.car_class,&d.license_plate,&d.city,&d.account_creation,&d.account_status))!=EOF){
            /*Enquanto a leitura do ficheiro for válida , de acordo com os tipos esperados, guarda os drivers na hashtable*/
            insert_driver();
            drivers->next;      
        }
        fclose(file);
        return /*users_hashtable já preenchida*/;
    }

Driver *drivers_hash_table[TABLE_SIZE];

void init_hash_table(){
    for(int i = 0;i<TABLE_SIZE;i++) drivers_hash_table[i] = NULL;
}

bool valid_driver(Driver *d){
    if(d == NULL) return false;
    if((strcmp(d->gender,"M") && strcmp(d->gender,"F") != 0) return false;
    if(strlen(d->birth_date) != 10) return false;
    if((strlen(d->license_plate != 8) return false;
    if(strlen(d->account_creation) != 10) return false;
    if(((strcmp(d->car_class,"basic") && strcmp(d->car_class,"green") && strcmp(d->car_class,"premium")) != 0)) return false;
    if(((strcmp(d->account_status,"active")) && strcmp(d->account_status,"inactive"))!= 0) return false; 
    else return true;
}


bool insert_driver(Driver *d){
    if(valid_driver(d)){
        /*falta inserir*/
    }
}