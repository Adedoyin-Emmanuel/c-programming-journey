#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int i, result;
    
    printf("Enter the array size\n");

    scanf("%d",&result);

    int *ptr = (int*) malloc(sizeof(int) * result);

    int test = ptr[0] = 60;


    printf("The first index of the pointer is %d", test);
}