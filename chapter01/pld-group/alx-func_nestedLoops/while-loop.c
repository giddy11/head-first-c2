#include <stdio.h>

int main ()
{
    int i, j;

    i = 0;
    while (i<5)
    {
        j = 0;
        while (j<3)
        {
            printf("2 ");
            j++;
        }
        
        printf("\n");
        i++;
    }
    
    return (0);
}