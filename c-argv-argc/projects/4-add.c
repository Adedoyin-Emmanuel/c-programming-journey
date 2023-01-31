#include <stdio.h>

/*
 *main - prints positive numbers 
 *@argc: this is the argument count parameter
 *@argv: this is the argument vector parameter which is a character pointer array
 *Return: returns 1 on error
 */

int main(int argc, char *argv[])
{

	int i, result = 0;

	/* check if no argument was passed into the main function*/
	if ( !(argc > 1))
	{
		printf("1\n");
		return (1);
	}

	/*check if the argument is of positive values only*/
	for (i = 0; i < argc; i++)
	{
		if (argv[i] < 0)
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[i]);
	}

	printf("%d", result);

}
