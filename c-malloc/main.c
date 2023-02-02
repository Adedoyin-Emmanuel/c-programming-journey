#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int i, result;
    
    printf("Enter the array size\n");

    scanf("%d",&result);

    int *ptr = (int*) malloc(sizeof(int) * result);

    ptr[0] = 60;


    printf("The first index of the pointer is %d", ptr[0]);
}