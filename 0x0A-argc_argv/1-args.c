#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments to the program
 *
 * @argc: number of argumrnts
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore aargv*/
		printf("%d\n", argc - 1);

		return (0);
}
