#include <stdio.h>

int c = 4;
int d = 4;

int main()
{
    long x = 4;
    int y = 4;
    int z = 4;
    int a = 4;
    double b = 4.00;



    printf("x is stored at %p\n", &x);
    printf("y is stored at %p\n", &y);
    printf("z is stored at %p\n", &z);
    printf("a is stored at %p\n", &a);
    printf("b is stored at %p\n", &b);
    printf("c is stored at %p\n", &c);
    printf("d is stored at %p\n", &d);



    return (0);
}