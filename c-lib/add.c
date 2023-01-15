#include <stdio.h>

void add(int a, int b)
{
    printf("%d + %d is %d", a, b, a + b);
}


int main(void){
    add(2,5);
    return (0);
}