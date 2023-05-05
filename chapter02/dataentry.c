#include <stdio.h>

int main()
{
    char first[40];
    char last[40];
    char fir;
    char las;
    unsigned int age;

    printf("Enter first name, last name and age: ");
    // scanf("%39s %39s %i", first, last, &age);
    // printf("Your details: %s %s and age is %i.\n",first, last, age);

    scanf("%c %c %i", &fir, &las, &age);
    printf("Your details: %c %c and age is %i.\n",fir, las, age);


    return (0);
}