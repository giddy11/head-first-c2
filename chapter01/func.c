#include <stdio.h>

int Sum(int a, int b)
{
    printf("add: %d\n", a + b);
}

int Subtract(int a, int b)
{
    printf("Subtract: %d\n", a - b);
}

int main()
{
    Subtract(100,3);

    Sum(20,2);

    return (0);
}