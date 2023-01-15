#include <stdio.h>

int multiplier(int a, int b)
{
	int r = (a * b);
	
	return r;
}


int main(void)
{
	int result = multiplier(5,6);

	printf("%d",result);
}


