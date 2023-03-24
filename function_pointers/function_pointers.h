#ifndef FUNC_POINTR_H
#define FUNC_POINTR_H

#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNC_POINTR_H */
