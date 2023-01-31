#include <stdio.h>

/*
 *main - prints the result of the multiplication fof 2 intergers
 *@argc: this is the argument count parameter
 *@argv: this is the argument vextor parameter which is a character pointer array
 *Return: return 1 on fail
 */

int main(int argc, char *argv[])
{

	int i, result = 0, num_1, num_2;
	
	/*check if no argument was passed*/
	if (!(argc > 1))
	{
		printf("Error\n");
		return (1);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	result = num_1 * num_2;
	printf("%d", result);
	return (0);

}
