#include "3-calc.h"
/**
 * main - check arguments.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: error if number of argumnet is wrong
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0, gon = 0;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf('Error\n');
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	gon = (get_op_func(argv[2]))(a, b);
	printf("%d\n", gon);
	return (0);
}
