# Learning Dynamic Memory Allocation In C Programming language 

## What is dynamic memory allocation ?

Dynamic memory is a way by which we programmatically allocate memory while executing a program. Let me dive deeper. Now when we are writing a usual C program, we often know the size of an array we want to loop through, because we explicitly define that while declaring the array.

``` c
#include <stdio.h>

//traditionally we explicitly define the size an array element would hold

void main(void)
{
	unsigned int age_array[5] = {17. 23, 26, 65, 76};
	
	int i;

	for (i = 0; i < age_array; i++)
	{
		printf("%d\n", age_array[i]);

	}


}

```

But what if the size of the array is something we are actually expecting from the user. 

We could do this

``` c
#include <stdio.h>

void main(void)
{
	printf("Enter the size of array\n");

	unsigned int array_size;

	//collect the input from the user

	scanf("%d", &array_size);
	
	//but we can not do this

	int array[array_size];

}

```
The solution is using dynamic memory allocation to tell the program to request some amount of memory from the operating system and when the program is done with the allocated memory, we free the memory and return it to the operating system. Note to use the malloc() and free() function, we have to include the <stdlib.h> header file.

``` c

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter the size of the array\n");

	int i, result;
	
	scanf("%d", &result);
	int *ptr = (int*) malloc(sizeof(int) * result);
	
	//check if the value was allocated 

	if ( ptr == NULL)
		printf("Null");

	for (i = 0; i < result; i++)
	{
		printf("%d", ptr[i]);
	}

	free(ptr);

	return (0);

}
```
