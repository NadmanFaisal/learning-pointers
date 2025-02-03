# include <stdio.h>

int main(int argc, char *argv[]) {
    int x = 4;
    int y = 6;

    /* 
    A pointer without an asterisk (*) represents a memory address. 
    Adding the asterisk (*) dereferences the pointer, meaning it retrieves 
    the value stored at the memory address the pointer holds.

    Below, pX is a pointer that stores the address of x (`&x` gives the address of x).
    Similarly, pY stores the address of y (`&y` gives the address of y).
    
    - `*pX` accesses the value stored at the address pX is pointing to (which is x).
    - `*pY` accesses the value stored at the address pY is pointing to (which is y).
    
    Printing only `pX` (`printf("%p", pX)`) prints the **memory address** stored in `pX`.
    
    Printing `*pX` (`printf("%d", *pX)`) prints the **value** stored at that memory address.
    This is also called dereferencing the pointer.
    */

    int *pX = &x;
    int *pY = &y;

    printf("Value of x: %d\n", *pX);    // prints 4
    printf("Value of y: %d\n", *pY);    // prints 6

    printf("Memory address of x: %p\n", pX);    // prints memory address of x
    printf("Value of y: %p\n", pY);             // prints memory address of y

    /*
    To change the value of a variable, you cannot modify it with its variable. For example, doing the
    following will not yield in desired results:

    x = 14;
    y = 14;

    To modify the value of a variable, we need to use pointers. With the help of pointers, we can
    dereference the pointers and directly modify the value of the variable.

    With the help of pointers, we can modify the value of variables directly by accessing to
    the memory location (address). Redeclaring variables like this will yield proper results,
    and the address of the variable will also remain the same.
    */

    *pX = 14;
    *pY = 16;

    printf("Value of x: %d\n", *pX);    // prints 14
    printf("Value of y: %d\n", *pY);    // prints 16

    printf("Memory address of x: %p\n", pX);    // prints memory address of x, same as before
    printf("Value of y: %p\n", pY);             // prints memory address of y, same as before

    // This is how you can reassign pointers to other pointers
    pX = pY;

    printf("Value of reassigned x: %d\n", *pX);    // prints 16 (because pX now points to y)
    printf("Value of reassigned y: %d\n", *pY);    // prints 16

    printf("Memory address of reassigned x: %p\n", pX);    // prints memory address of y
    printf("Value of reassigned y: %p\n", pY);             // prints memory address of y, same as above
}
