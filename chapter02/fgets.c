#include <stdio.h>

void enter_food(char *food);



int main()
{
    char food[2];

    enter_food(food);
    printf("size: %d\n", sizeof(food));
    printf("Your food is sweet: %s\n", food);

    return(0);
}

void enter_food(char *food)
{
    printf("Enter Favorite food: \n");
    printf("size in function: %d\n", sizeof(food));
    fgets(food, sizeof(food), stdin);

}