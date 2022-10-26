#ifndef RIDES_H
#define RIDES_H

#include "drivers.h"
#include "users.h"

typedef struct rides{
    int id; // ride id
    char *date; // ride date = dd/mm/aaaa
    Driver *driver; // driver's ID  (rework)
    User *user; // User's username (rework)
    char *city; // ride city
    double distance;   // ride distance
    double score_user; // user's score in this ride
    double score_driver;   // driver's score in this ride
    double tip;  // tip from the user = not to add to trip_value
    char *comment;  // a comment
    struct rides *next;
} Ride;

#endif
