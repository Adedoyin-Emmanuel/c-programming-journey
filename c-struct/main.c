#include <stdio.h>

struct User
{
    char name[20];
    int age;
    char address[50];
};

int main(void)
{
    // create a group of users
    struct User users_group[8] =
    {
            {"Adedoyin Josiah", 80, "42, kuburat Agbeduyi street"},
            {"Adedoyin Adefunke", 50, "42, kuburat Agbeduyi street"},
            {"Adedoyin Aderonke", 25, "42, kuburat Agbeduyi street"},
            {"Adedoyin Joshua", 23, "42, kuburat Agbeduyi street"},
            {"Adedoyin Adeola", 20, "42, kuburat Agbeduyi street"},
            {"Adedoyin Emmanuel", 17, "42, kuburat Agbeduyi street"},
            {"Adedoyin Adewumi", 13, "42, kuburat Agbeduyi street"},
            {"Adedoyin Israel", 11, "42, kuburat Agbeduyi street"}
            
    };

    for (int i = 0; i < (sizeof(users_group) / sizeof(struct User)); i++)
    {
        printf("My name is %s, I am %d years old, I live at %s\n", users_group[i].name, users_group[i].age, users_group[i].address);
    }

    return (0);
}