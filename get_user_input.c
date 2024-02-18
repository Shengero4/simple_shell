#include "shell.h"

/**
 * @file get_user_input.c
 * @brief Implementation of the function to read user commands.
 *
 * This file contains the implementation of the read_user_command function,
 * which reads a user-entered command from the standard input using fgets.
 * It handles errors related to input reading, and removes the trailing newline
 * character from the command if present.
 *
 * @param command The buffer to store the user-entered command.
 * @param size    The size of the command buffer.
 */

void read_user_command(char *command, size_t size)
{
        if (fgets(command, size, stdin) == NULL)
        {
                if (feof(stdin))
                {
                        print_msg("\n");
                        exit(EXIT_SUCCESS);
                }
                else
                {
                        print_msg("input user reading error");
                        exit(EXIT_FAILURE);
                }
        }
        command[strcspn(command, "\n")] = '\0';
}
