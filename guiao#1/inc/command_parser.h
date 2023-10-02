#ifndef COMMAND_PARSER_H
#define COMMAND_PARSER_H

#define CMD_PUSH "PUSH"
#define CMD_PUSH_FRONT "PUSH_FRONT"
#define CMD_POP "POP"
#define CMD_POP_FRONT "POP_FRONT"
#define CMD_SIZE "SIZE"
#define CMD_REVERSE "REVERSE"
#define CMD_PRINT "PRINT"

#include "deque.h"

typedef struct cmd
{
    char *command;
    int *args; // NULL se nao houver
    int nargs; // numero de argumentos
} Cmd;

void processCommand(Deque *deque, Cmd *cmd);

#endif