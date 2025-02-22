#include <stdio.h>

/* 
This method takes the pointer to an array of Strings.
*/
void printer (char **array) {
    printf("In printer method:\n");
    
    for (int i = 0; i < 2; i++) {
        printf("%s\n", array[i]);
    }
}

/*
This method also takes the pointer to an array of Strings.
*/
void printer2 (char *array[]) {
    printf("In printer2 method:\n");
    
    for (int i = 0; i < 2; i++) {
        printf("%s\n", array[i]);
    }
}

int main (int argc, char **argv) {

    /* This is an array of characters */
    char *name = "Nadman";
    printf("Char 1: %c\n", name[0]);

    /* Another array of size 16, can be used similarly 
    like the pointer to the char, for string variables. */
    char name2[16] = "Superman";
    printf("Char 1: %c\n", name2[0]);

    /* This is an array of strings, or an array of array of chars */
    char *names[] = {"Nadman", "Superman"};

    printf("String name: %s\n", name);
    printf("Name2: %s\n", name2);

    /* You can send the exact array as such to a method, which takes pointer 
    to a pointer to the first char of the array. Or more concisely, the pointer 
    to the first char of the first stirng. */
    printer(names);
    printer2(names);
}