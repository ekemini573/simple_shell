#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>

extern char **environ;

void prompt1(void);
void prompt2(void);
char *read_command(void);
char **tokenizer(char *command);
char **reallocate(char **pointer, size_t *size);
int print_env(void);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int print_s(char *s);
char *_strcat(char *dest, char *src);
char *_strstr(char *haystack, char *needle);
int execution(char **args);
int search(char **args);
int search_dirs(char **command, char **args);
char *find_path(char *name);
int interpreter(char **args);

/* helper function for efficient free */
void free_buffers(char **buf);

#endif /* SHELL_H */
