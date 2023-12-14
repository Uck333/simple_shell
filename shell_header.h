#ifndef _header_shell_h_
#define _header_shell_h_

#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void shell_command_executer(char *k);
void display_shell_prompt(void);
int built_putchar(char k);
void built_printf(char *k);
int shell_mode_interactive(mode_t *mode);
int alphabet_check(int k);
int delimiter_check(char k, char *string_checked);
int built_atoi(char *k);

#endif
