#include "shell.h"

/**
 * @file exec_prompt.c
 * @brief Implementation of the function to execute user commands.
 *
 * This file contains the implementation of the exec_commands function,
 * which forks a child process and uses execlp to execute the provided
 * user command. It also handles errors related to forking and execution.
 *
 * @param command The user-entered command to be executed.
 * @param envp    Array of environment variables (unused in this case).
 */

void exec_commands(const char *command, char *envp[])
{
    if (strcmp(command, "env") == 0)
    {
        print_environment(envp);
    }
    else if (access(command, X_OK) == 0)
    {
        pid_t child_proc_id = fork();

        if (child_proc_id == -1)
        {
            perror("fork failed");
            exit(EXIT_FAILURE);
        }
        else if (child_proc_id == 0)
        {
            execlp(command, command, (char *)NULL);
            perror("exec failed");
            exit(EXIT_FAILURE);
        }
        else
        {
            wait(NULL);
        }
    }
    else
    {
        print_msg("Command not found in PATH.\n");
    }
}
