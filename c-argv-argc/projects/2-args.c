#include <stdio.h>

/*
 *main - prints all the arguments it receives during execution
 *@argc: this is the argument count parameter
 *@argv: this is the argument vector parameter which is a character pointer array
 */

void main (int argc, char *argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n",&argv[i]);
	}
}
