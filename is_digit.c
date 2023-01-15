#include <stdio.h>

int is_digit(int c)
{
	/*check if the args is a digit*/
	if (c >='0' && c <= '9')
		printf("%c  is a digit\n",c);
	else
		printf("%c is not a digit\n",c);
}

int main(void)
{
	int digit;

	printf("Enter a number\n");

	digit = getchar();

	is_digit(digit);
}
