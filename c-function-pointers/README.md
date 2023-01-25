# Learning function pointers 

## What are function pointers ?

A function pointer is a variable that points to the memory address of a function, just like a normal variable pointer. A function pointer can be used to access the function it points to indirectly.

### Traditional Pointers

```c
#include <stdio.h>

/**
 *main - prints hello world
 *Return: 0
 */
int main(void)
{
    printf("Hello World\n")
}