#include <stdio.h>

int main()
{
    int x = 4;
    int *address_of_x = &x;
    int value_stored = *address_of_x;

    printf("x lives at %p\n", x);


    printf("address of x: %p\n", *address_of_x);

    printf("value stored: %p\n", &value_stored);

    return (0);
}