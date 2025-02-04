#include <stdio.h>

/*
The following function takes a pointer to an array and prints the 
memory addresses of its elements. Since arrays decay into pointer 
to the first element of the array when passed to functions, the 
parameter `int *array` is equivalent to `int array[]` in function 
declarations. So, array[] points to first element of the array.
*/
void printer(int array[]) {
    printf("Memory of the array's first element in method: %p\n", array);
    for(int i = 0; i < 5; i++) {
        printf("%d's address in the loop: %p\n", array[i], &array[i]);
    }
}

int main(int argc, char *argv[]) {
    int numbers[] = {1, 2, 3, 4, 5};

    printf("Memory of the array's first element in main: %p\n", &numbers);

    // // Printing the address of each element in main
    printf("Address 1: %p\n", &numbers[0]);
    printf("Address 2: %p\n", &numbers[1]);
    printf("Address 3: %p\n", &numbers[2]);
    printf("Address 4: %p\n", &numbers[3]);
    printf("Address 5: %p\n", &numbers[4]);
    printf("\n");

    /*
    We can pass `numbers` instead of `&numbers` because in C, when an array is passed
    to a function, it automatically decays into a pointer to its first element (`&numbers[0]`).
    This means `printer(numbers)` is effectively passing `int *` (pointer to the first element).
    */
    printer(numbers);
}