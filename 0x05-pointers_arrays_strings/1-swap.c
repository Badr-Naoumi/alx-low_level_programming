#include main.h
/**
 * swap_int - swaping the values of two integers
 * @a: first input
 * @b: second input
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
