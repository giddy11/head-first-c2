#include <stdio.h>

int main()
{
    int n = 98;
    int *p = &n;

    p = 4;

    printf("%d", n);

    return (0);
}