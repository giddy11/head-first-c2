#include <stdio.h>


void decayed(char *s)
{
    printf("Decayed: %li\n", sizeof(s));
}


int main()
{
    char s[] = "something long.";
    char *t = s;

    printf("sizeof pointer: %li\n", sizeof(s));
    decayed(s);
    printf("sizeof pointer: %li\n", sizeof(s));
}