#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num; // ptr stores the memory address of num

    printf("The value of num is: %d\n", num); // Output: The value of num is: 42
    printf("The value of *ptr is: %d\n", *ptr); // Output: The value of *ptr is: 42

    *ptr = 21; // Set the value of num to 21 through ptr

    printf("The value of num is: %d\n", num); // Output: The value of num is: 21
    printf("The value of *ptr is: %d\n", *ptr); // Output: The value of *ptr is: 21

    return 0;
}
