#include <stdio.h>

int main(void)
{
    char name[8] = "Adedoyin";
    

    //a pointer that points to the name variable
    char *ptr_name = &name;

    int i;

    printf("%s",ptr_name)

    for(i = 0; i < sizeof(name); i++)
    {
        printf("%s", *ptr_name[i]);
    }
    
    return 0;
}