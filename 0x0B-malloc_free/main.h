#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>

char **strtow(char *str);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *argstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);


#endif
