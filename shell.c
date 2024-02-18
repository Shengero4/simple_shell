#include "shell.h"

/**
 * @file main.c
 * @brief Main entry point for the simple shell program.
 *
 * This file contains the main function for a basic shell
 * implementation. It includes necessary headers and implements
 * the main loop to continuously read user commands, display prompts,
 * and execute the entered commands.
 */

int main(int argc, char *argv[], char *envp[])
{
    (void)argc;
    (void)argv;
    while (1)
    {
                char command[128];
        print_prompt();
        read_user_command(command, sizeof(command));
        if (strcmp(command, "exit") == 0)
        {
            exit_shell();
        }
        if (strcmp(command, "env") == 0)
        {
            print_environment(envp);
            continue;
        }
        exec_commands(command, envp);
    }
}
