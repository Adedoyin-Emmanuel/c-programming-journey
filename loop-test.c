#include <stdio.h>


int print_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d \n", i);
	}

	return (i);
}

int main(void)
{
	int returned_value = print_number();

	printf("The Returned value is = %d \n", returned_value);
}
