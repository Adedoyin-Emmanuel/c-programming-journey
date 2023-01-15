#include <stdio.h>

/**
  *Main returns the size of particular data type
  *
  *
  *Return :  always 0
 */

int main(void)
{
	char character;
	
	printf("Enter a character\n");
	scanf("%c",&character);

	/*print the ASCII value of the character */

	printf("The ASCII value of %c is = %d",character,character); 
	return (0);
}


