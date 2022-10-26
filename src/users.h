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
    struct users *next;
} User;

void init_hash_table();
unsigned int hash(char *username);
void print_table_status();
User *hash_table_lookup(char *username);
User *hash_table_delete(char *username);
bool valid_user(User *u);
bool insert_user(User *u);


#endif
