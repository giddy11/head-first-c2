#include <stdio.h>


int main()
{
    char food[5];

    printf("Enter Favorite food: \n");
    // fgets(food, sizeof(food), stdin);
    gets(food);

    printf("Your food is sweet: %s\n", food);


    return(0);
}