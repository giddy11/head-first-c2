#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = 4;

    if ((a > c) && (b <= c))
    {
        printf("A");
    }
    else if (!(a > c) && (b <= c) && (a == c))
    {
        printf("B");
    }
    else if ((a > c) || (b == c) || (a >= c))
    {
        printf("C");
    }
    else
    {
        printf("D");
    }
    
    
    
    
        
    return (0);
}