#include <stdio.h>

struct User
{
    char name[20];
    int age;
    char address[50];

};


int main(void)
{
    struct User user1 = {"Adedoyin Emmanuel",17,"42, kuburat Agbeduyi street"};

    printf("My name is %s, I am %d years old. I live at %s\n", user1.name, user1.age, user1.address);
}