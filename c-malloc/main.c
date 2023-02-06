#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    unsigned int i, result;
    
    printf("Enter the array size\n");

    scanf("%d",&result);

    int *ptr = (int*) malloc(sizeof(int) * result);
   

  
    //printf("The first index of the pointer is %d\n", test);
    printf("The address of this pointer is %p\n",&ptr);
    printf("The address of the pointer first element is %p\n", &ptr[0]);
}