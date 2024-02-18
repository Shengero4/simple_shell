#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>

/**
 * @file shell.h
 * @brief Header file for a simple shell program.
 *
 * This header file declares functions and includes necessary
 * libraries for a basic shell implementation.
 */

void print_msg(const char *str);
void print_prompt(void);
void exec_commands(const char *command, char *envp[]);
void read_user_command(char *command, size_t size);
void exit_shell(void);
void print_environment(char *envp[]);

#endif
