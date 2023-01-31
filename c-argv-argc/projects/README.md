# Learning Argc and Argv 


### What is Argc and Argv

Argc is also know as argument count while Argv is known as argument vector

### Argc
Argc is the total number of aguments passed when executing a C or C++ file. by default, if there are no arguments, Argc is 1. meaning the name of the executable file is taken into account as an argument. But if other arguments are passed, Argc would track the number of the arguments.

```c 

#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Argc is %d",argc);

	return (0);
}

//outputs 1

````

### Argv
Argv on the other hand is know as argument vector which stores the actual values of the arguments passed when calling the C executable file. Argv is a character pointer array. The first index (ie) argv[0] stores the path to the current executable file. while other indexes hold the values of the arguments passed into them.

```c 

#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	
	printf("Total Argc is %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("Argv[%d] is %s\n", i, argv[i]);
	}


	return (0);
}

//This would output the argument count as well as the respective argument values

````


