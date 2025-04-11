#include <stdio.h>

int main() {
   int * p;
    int a = 10;
    p = &a; // p points to the address of a
    printf("Value of a: %d\n", a); // prints 10
    printf("Address of a: %p\n", (void*)&a); // prints address of a
    printf("Value of p: %p\n", (void*)p); // prints address of a
    return 0;
}