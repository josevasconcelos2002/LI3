#ifndef DRIVERS_H
#define DRIVERS_H

typedef struct drivers{
    int id; // driver's id;
    char *name; // driver's name
    char *birth_date;   // data format = dd/mm/aaaa
    char *gender;   // driver's gender = M or F
    char *car_class;    // car_class = Basic/Green/Premium
    char *city; // Driver's city
    char *account_creation; // account_creation date
    char *account_status;   // active or inactive
} Driver;

#endif
