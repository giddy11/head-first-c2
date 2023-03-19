#include <stdio.h>

int greater (int n, int m)
{
    return (n > m);
}

int main ()
{
    int n = 100;
    int m = 200;

    if (greater(n,m))
        printf("The number %i is greater than %i\n", n,m);
    
    printf("The number %i is not greater than %i\n", n,m);

    return (0);
}