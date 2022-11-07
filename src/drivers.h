#ifndef DRIVERS_H
#define DRIVERS_H

typedef struct drivers{
    int id; // driver's id;
    char *name; // driver's name
    char *birth_date;   // data format = dd/mm/aaaa
    char *gender;   // driver's gender = M or F
    char *car_class;    // car_class = basic/green/premium
    char *license_plate; //matrícula
    char *city; // Driver's city
    char *account_creation; // account_creation date
    char *account_status;   // active or inactive
    struct drivers *next;
} Driver;

void *parse_driver(const char *file_name);
void init_drivers_table();
bool valid_drivers(Driver *d);
bool insert_driver(Driver *d);


#endif
