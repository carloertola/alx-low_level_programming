#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _putchar(char c);
void *malloc(size_t size);
void free(void *ptr);
void exit(int status);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif /* HOLBERTON_H */
