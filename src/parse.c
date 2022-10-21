#include "parse.h"
#include <stdio.h>

/*retorna a hashtable resultante?*/ parse_users(const *char "users.csv"){
    FILE *users;
    users = fopen("users.csv","r");
    if(users == NULL) printf("O ficheiro que introduziu está vazio.\n");
    

    fclose(users);
}

/*retorna a hashtable resultante?*/ parse_drivers(const *char "drivers.csv"){
    FILE *drivers;
    drivers = fopen("drivers.csv","r");
    if(drivers == NULL) printf("O ficheiro que introduziu está vazio.\n");


    fclose(drivers);
}

/*retorna a hashtable resultante?*/ parse_drivers(const *char "drivers.csv"){
    FILE *rides;
    rides = fopen("rides.csv","r");
    if(rides == NULL) printf("O ficheiro que introduziu está vazio.\n");


    fclose(rides);
}