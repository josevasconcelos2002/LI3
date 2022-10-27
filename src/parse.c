#include "parse.h"
#include <stdio.h>
#include "drivers.h"
#include "users.h"
#include "rides.h"


    
    
    
    
    else if(file_name = "drivers.csv"){
        int id;
        char *name,*birth_date,*gender,*car_class,*license_plate,*city,*account_creation,*account_status;
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
        while((fscanf(file,"%d;%s;%s;%s;%s;%s;%s\n",&id,&name,&birth_date,&gender,&car_class,&license_plate,&city,&account_creation,&account_status))!=EOF){
            /*Enquanto a leitura do ficheiro for válida , de acordo com os tipos esperados, guarda os drivers na hashtable*/
            Driver.id = id;
            Driver.name = name;
            Driver.birth_date = birth_date;
            Driver.gender = gender;
            Driver.car_class = car_class;
            Driver.license_plate = license_plate;
            Driver.city = city;
            Driver.account_creation = account_creation;
            Driver.account_status = account_status;
            drivers->next; /*next driver na hashtable dos drivers*/        
        }
        fclose(file);
        return /*drivers_hashtable já preenchida*/;
    }
    else if(file_name = "rides.csv") {
        int id;
        float distance,score_user,score_driver,tip; /*tip = grojeta*/
        /*de acordo com o guião, há valores com casas decimais, as variáveis são floats*/
        char *date,*driver,*user,*city,*comment;
        if(file == NULL) printf("O respetivo ficheiro está vazio.\n");
        while((fscanf(file,"%d;%s;%s;%s;%s;%.3d;%.3d;%.3d;%.3d;%s\n",&id,&name,&birth_date,&gender,&car_class,&license_plate,&city,&account_creation,&account_status))!=EOF){
            /*Enquanto a leitura do ficheiro for válida , de acordo com os tipos esperados, guarda as rides na hashtable*/
            Ride.id = id;
            Ride.date = date;
            Ride.driver = driver;
            Ride.user = user;
            Ride.city = city;
            Ride.distance = distance;
            Ride.score_user = score_user;
            Ride.score_driver = score_driver;
            Ride.tip = tip;
            Ride.comment = comment;
            rides->next; /*next ride na hashtable das rides*/ 
        }
        fclose(file);
        return /*rides_hashtable já preenchida*/;
    }
}
