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

void *parse_ride(const char *file_name)
{
    FILE *open = NULL;
    open = fopen(file_name, "r");
    char *info;
    int line = 0;
    int count = 0;
    Ride d;
    if (open == NULL)
        printf("O respetivo ficheiro está vazio.\n");
    while ((fgets(info,sizeof(info),open))){
          line ++;
          char *field = strtok(info,";");                           // alternativa usando o 'fgets' que, pelos vistos, é mais aconselhado
          while (field)
          {
            if(count == 0) strcpy(r.id,field);
            if(count == 1) strcpy(r.date,field);
            if(count == 2) strcpy(r.driver,field);
            if(count == 3) strcpy(d.user,field);
            if(count == 4) strcpy(d.city,field);
            if(count == 5) strcpy(d.distance,field);
            if(count == 6) strcpy(d.score_user,field);
            if(count == 7) strcpy(r.score_driver,field);
            if(count == 8) strcpy(d.tip,field);
            if(count == 8) strcpy(d.comment,field);
            field = strtok(NULL,";");
            count ++;
          }    
    }
    /*while ((fscanf(open,"%s;%s;%s;%s;%s;%s;%s\n",&u.username,&u.name,&u.gender,&u.birth_date,&u.account_creation,&u.pay_method,&u.account_status)) != EOF)
    {
        insert_user(&user);
    }*/
    fclose(open); /*users_hashtable já preenchida*/;
}

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