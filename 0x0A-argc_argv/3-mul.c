#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
	int A, B, f;

	if (argc != 3)

	{
		printf("Error\n");
		return (1);
	}
	A = atoi(argv[1]);
	B = atoi(argv[2]);

	f = A * B;
	printf("%d\n", f);
	return	(0);
}
