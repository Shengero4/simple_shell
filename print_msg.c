#include "shell.h"

void print_msg(const char *str)
{
        write(STDOUT_FILENO, str, strlen(str));
}
