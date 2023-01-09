#include <stdio.h>

/**
 * main - write a program that prints its name, followed by a new line.
 * if you rename the prigram, it will print the new name, without having to compile it again.
 * you should not remove the path before the name of the program
 *
 * @argc: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: This to 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return(0);
}
