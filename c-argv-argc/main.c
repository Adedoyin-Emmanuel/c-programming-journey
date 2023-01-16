#include <stdio.h>

/**
 * main - Prints out the argument count and the argument vector
 * @argc: the argument count parameter
 * @argv: the argument vector parameter
*/

int main(int argc, char *argv[])
{
    printf("%d\n",argc);
   
    int i;

    for ( i = 0; i < argc; i++)
    {
        printf("argc[%d] argv[%s]\n",i,argv[i]);
    }
    
}