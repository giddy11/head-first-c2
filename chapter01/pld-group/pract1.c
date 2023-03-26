#include <stdio.h>

int main()
{
    char a [] = {'F', 'o', 'o', 'd'};

    printf("I love eating ");

    for (int i = 0; i < 4; i++)
    {
        printf("%c", a[i]);
    }
    printf(" more!");
    return (0);
}