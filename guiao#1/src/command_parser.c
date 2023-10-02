#include "command_parser.h"

void processCommand(Deque *deque, Cmd *cmd)
{
    if (cmd)
    {
        switch (cmd->command)
        {
        case CMD_PUSH:
            int len = cmd->nargs;
            int i = 0;
            while (len > 0)
            {
                push(&deque, cmd->command[i]);
                i++;
                len--;
            }
            break;
        }
    }
}