#include <stdio.h>

/**
 *main - prints the program name followed by a new line
 *@argc: the argument count parameter
 *@argv[]: the argument vector array parameter
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

