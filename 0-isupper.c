#include <stdio.h>

/**
 *main - checks for a uppercase letter and returns 1 if true and 0 if fasle
 *@letter is the argument for the function
 *Return: 1 if true 0 otherwise
 */

int is_upper(int c)
{
	if ( c >='A' && c <='Z')
		printf("%c is an uppercase letter\n", c);
	else 
		printf("%c is not an uppercase letter\n", c);
}

int main(void)
{
	char letter;
	printf("Enter a character\n");

	letter  = getchar();
	
	is_upper(letter);
}
