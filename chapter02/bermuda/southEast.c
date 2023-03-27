#include <stdio.h>

void go_south_east(int *lat, int *lon);

int main()
{
    int lat = 32;
    int lon = -64;

    printf("lat lives at %p\n", lat);
    printf("lon lives at %p\n\n", lon);

    go_south_east(&lat, &lon);

    printf("Avast! Now at: [%i, %i]\n", lat, lon);

    return (0);
}


void go_south_east(int *lat, int *lon)
{
    *lat -= 1;
    printf("*lat lives at %p\n", lat);

    *lon -= 1;
    printf("*lon lives at %p\n\n", lon);
}