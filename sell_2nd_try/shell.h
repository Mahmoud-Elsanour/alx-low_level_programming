#ifndef SHELL_H 
#define SHELL_H

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

void execmd(char *cmd, char **argv);
char *_getenv(const char *name);
list_t *get_paths(void);
char *stat_cmd(char *cmd, list_t *paths);
size_t print_list(const list_t *h);

#endif //shell.h
