#include <stdio.h>

int factorial(int n)
{
    int retval = 1;
    while (n != 1)
    {
        retval *= n--;
    }
    // return retval;
}

int main(void)
{
    int val = factorial(5);
    printf("%d! = %d\n", 5, val);
}