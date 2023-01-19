#include <stdio.h>

/**
 * main - returns a pointer that points to a pointer that points to a pointer 
 *  
*/

int main(void)
{
    int x = 5;

    int *ptr_x = &x;

    /*
    printf("The value of x is %d\n",x);
    printf("The address of x is %p\n",&x);
    printf("Again, the value of x is %d",*ptr_x); //dereference the pointer
    */
   //create a pointer that points to a pointer
   int **ptr_x2 = &ptr_x;
//    printf("Meanwhile, the address of the first pointer is %p\n",&ptr_x);
//    printf("The address of the first pointer is %p\n",ptr_x2);
//    printf("We could also get the value of x from this second pointer \n");
//    printf("The value of x from the second pointer is %d",**ptr_x2);
  //create a pointer that points to a pointer that points to a pointer
  int ***ptr_x3 = &ptr_x2;

//   printf("the address of the second pointer is %p\n",ptr_x3);
//   printf("meanwhile, we could also get the address of the second pointer manually\n");
//   printf("The addresss of the second pointer is %p\n",&ptr_x2);
  //lets use the last pointer to get the value of x

  printf("The value of x from the last pointer is %d",***ptr_x3);
}