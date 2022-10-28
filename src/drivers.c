#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "drivers.h"
#include <glib-2.0>

#define TABLE_SIZE 1000 /*how much?*/

User *hash_table_drivers[TABLE_SIZE];

void init_drivers_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
        hash_table_drivers[i] = NULL;
}

void *parse_driver(const char *file_name)
{
    FILE *open = NULL;
    open = fopen(file_name, "r");
    char *info;
    int line = 0;
    int count = 0;
    Driver d;
    if (open == NULL)
        printf("O respetivo ficheiro está vazio.\n");
    while ((fgets(info,sizeof(info),open))){
          line ++;
          char *field = strtok(info,";");                           // alternativa usando o 'fgets' que, pelos vistos, é mais aconselhado
          while (field)
          {
            if(count == 0) strcpy(d.id,field);
            if(count == 1) strcpy(d.name,field);
            if(count == 2) strcpy(d.birth_date,field);
            if(count == 3) strcpy(d.gender,field);
            if(count == 4) strcpy(d.car_class,field);
            if(count == 5) strcpy(d.license_plate,field);
            if(count == 6) strcpy(d.city,field);
            if(count == 7) strcpy(d.account_creation,field);
            if(count == 8) strcpy(d.account_status,field);
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

Driver *drivers_hash_table[TABLE_SIZE];

void init_drivers_table(){
    for(int i = 0;i<TABLE_SIZE;i++) drivers_hash_table[i] = NULL;
}

bool valid_drivers(Driver *d){
    if(!d) 
        return false;
    if((strcmp(d->gender,"M") && strcmp(d->gender,"F") != 0))
        return false;
    if ((strlen(d->birth_date) || strlen(d->account_creation)) != 10)
        return false;
    if((strlen(d->license_plate != 8)))
        return false;
    if(((strcmp(d->car_class,"basic") && strcmp(d->car_class,"green") && strcmp(d->car_class,"premium")) != 0)) 
        return false;
    if(((strcmp(d->account_status,"active")) && strcmp(d->account_status,"inactive"))!= 0)
        return false; 
    else
        return true;
}


bool insert_driver(Driver *d){
    if(valid_driver(d)){
        /*falta inserir*/
    }
}

int main(int argv, char **argc){
        init_drivers_table();
        print_drivers_table();
        parse_drivers("drivers.csv");
        print_drivers_table();
}