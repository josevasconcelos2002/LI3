#ifndef USERS_H
#define USERS_H

typedef struct users{
    char *username; // user's username
    char *name; // user's name
    char *gender; // user's gender = M or F
    char *birth_date;   // user's birth date = dd/mm/aaaa
    char *account_creation; // account creation date = dd/mm/aaaa
    char *pay_method;   // payment method
    char *account_status;   // active or inactive
} User;

#endif
