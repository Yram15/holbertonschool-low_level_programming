#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
/* Task 0 */
void *malloc_checked(unsigned int b);
/* Task 1 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* Task 2 */
void *_calloc(unsigned int nmemb, unsigned int size);
/* Task 3 */
int *array_range(int min, int max);
/* Task 4 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */
