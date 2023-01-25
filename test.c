#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = true;

    float y = 23.5;

    if (x)
    {

        printf("X is true");
        printf("%f", y);
    }
    else
        printf("X is false");
}