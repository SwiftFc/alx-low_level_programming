#ifndef MAIN_H
#define MAIN_H

/* Header Functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function prototypes */
int _putchar(char c);
int get_endianness(void);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif

