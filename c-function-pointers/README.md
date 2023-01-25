# Learning function pointers 

## What are function pointers ?

A function pointer is a variable that points to the memory address of a function, just like a normal variable pointer. A function pointer can be used to access the function it points to indirectly.

### Traditional Pointers

```c
#include <stdio.h>

/**
 *main - prints hello world using a pointer
 *Return: 0
 */
int main(void)
{
    char name[20];


    //a pointer that points to the name variable
    char *ptr_name = &name;

    ptr_name = "Adedoyin Emmanuel";

    for(int i = 0; i < sizeof(name); i++)
    {
        printf("Hello World, My name is %s", *ptr_name[i]);
    }
}