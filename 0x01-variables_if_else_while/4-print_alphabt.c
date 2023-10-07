#include <stdio.h>
/**
* main - Print alphabet except q and e
* Return: 0 (Success)
*/
int main(void)
{
char n;
for (n = 'a'; n <= 'z'; n++)
{
if (n != 'q' && n != 'e')
{
putchar(n);
}
}
putchar('\n');
return (0);
}
