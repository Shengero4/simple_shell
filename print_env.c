#include "shell.h"

/**
 * @file print_environment.c
 * @brief Implementation of the print_environment function.
 *
 * This file contains the implementation of the print_environment function,
 * which prints the current environment.
 */

void print_environment(char *envp[])
{
        int i;
    for (i = 0; envp[i] != NULL; i++)
    {
        printf("%s\n", envp[i]);
    }
}
