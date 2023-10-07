#include <stdio.h>
/**
* main - prints numbers of base 10 starting from 0, followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
char a;
for (a = '0' ; a <= '9' ; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
