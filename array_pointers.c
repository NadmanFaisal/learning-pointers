#include <stdio.h>
#define MAX 10

int main(int argc, char *argv[]) {
    int numbers[] = {1, 2, 3, 4, 5};

    int *pNumbers = &numbers[5];
    printf("Address of the array: %p\n", pNumbers);
    printf("\n");

    int *pFirst_number = &numbers[0];
    int *pSecond_number = &numbers[1];
    int *pThird_number = &numbers[2];
    int *pForth_number = &numbers[3];
    int *pFifth_number = &numbers[4];
    
    printf("First numebr of the array: %d\n", *pFirst_number);
    printf("Second numebr of the array: %d\n", *pSecond_number);
    printf("\n");

    printf("Address of the first numebr of the array: %p\n", pFirst_number);
    printf("Address of the second numebr of the array: %p\n", pSecond_number);
    printf("Address of the third numebr of the array: %p\n", pThird_number);
    printf("Address of the forth numebr of the array: %p\n", pForth_number);
    printf("Address of the fifth numebr of the array: %p\n", pFifth_number);

    printf("\n");
    printf("==============CHANGING VALUES OF THE ARRAY==============\n");
    printf("\n");

    *pFirst_number = 10;
    *pSecond_number = 20;
    *pThird_number = 30;
    *pForth_number = 40;
    *pFifth_number = 50;

    printf("First numebr of the array: %d\n", *pFirst_number);
    printf("Second numebr of the array: %d\n", *pSecond_number);
    printf("\n");

    printf("Address of the first numebr of the array: %p\n", pFirst_number);
    printf("Address of the second numebr of the array: %p\n", pSecond_number);
    printf("Address of the third numebr of the array: %p\n", pThird_number);
    printf("Address of the forth numebr of the array: %p\n", pForth_number);
    printf("Address of the fifth numebr of the array: %p\n", pFifth_number);

    printf("\n");
    printf("==============CHANGING VALUES OF THE ARRAY THROUGH LOOPS==============\n");
    printf("\n");

    for(int i = 0; i < 5; i++) {
        int *pValue = &numbers[i];
        *pValue = *pValue * 10;
    }

    printf("First numebr of the array: %d\n", *pFirst_number);
    printf("Second numebr of the array: %d\n", *pSecond_number);
    printf("\n");

    printf("Address of the first numebr of the array: %p\n", pFirst_number);
    printf("Address of the second numebr of the array: %p\n", pSecond_number);
    printf("Address of the third numebr of the array: %p\n", pThird_number);
    printf("Address of the forth numebr of the array: %p\n", pForth_number);
    printf("Address of the fifth numebr of the array: %p\n", pFifth_number);

    printf("\n");
    printf("==============NEW STUFF TYPE SHIFT==============\n");
    printf("\n");

    /*
    Below here, we are first pointing to the address of the first spot of the table,
    and setting the first spot to 45. Then, we are incrementing the pointer to the 
    memory address of the second spot of the table, and setting the value to 55.
    */

    int table[MAX];
    int *pointer = &table;       // Pointer initialized to the first element of table
    *pointer = 45;                  // Assign 45 to table[0]
    pointer++;                      // Move pointer to table[1]
    *pointer = 55;                  // Assign 55 to table[1]

    for(int i = 0; i < MAX; i++) {
        printf("%d\n", table[i]);
    }
}