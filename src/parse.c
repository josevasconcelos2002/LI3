#include "parse.h"
#include <stdio.h>

/*retorna a hashtable resultante?*/ parse(const *char file_name){
    FILE *file;
    open = fopen(file_name,"r");
    if(file_name = "user.csv"){
        char *user,*name,*birth_date,*account_creation, *pay_method, *account_status;
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
        while((fscanf(file,"%s;%s;%s;%s;%s;%s;%s\n",&user,&name,&birth_date,&account_creation,&pay_method,&account_status))!=EOF){
            /*Enquanto a leitura do ficheiro for válida , de acordo com os tipos esperados, guarda os users na hashtable*/
        }

        fclose(file);
        return /*users_hashtable já preenchida*/;
    }
    else if(file_name = "drivers.csv"){
        int id;
        char *name,*birth_date,*gender,*car_class,*license_plate,*city,*account_creation,*account_status;
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
        while((fscanf(file,"%d;%s;%s;%s;%s;%s;%s\n",&id,&name,&birth_date,&gender,&car_class,&license_plate,&city,&account_creation,&account_status))!=EOF){
            /*Enquanto a leitura do ficheiro for válida , de acordo com os tipos esperados, guarda os drivers na hashtable*/
        }

        fclose(file);
        return /*drivers_hashtable já preenchida*/;
    }
    else if(file_name = "rides.csv") {
        int id;
        char *date,*driver,*user,*city; distance; score_user; score_driver;tip; comment
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
    

        fclose(file);
        return /*rides_hashtable já preenchida*/;
    }
}