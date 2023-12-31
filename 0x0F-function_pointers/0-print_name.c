#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: Function that takes a char* and prints it.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
