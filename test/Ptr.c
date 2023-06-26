#include <stdio.h>
#include <stdlib.h>
#include "main.h"

typedef struct {
    int x;
    int y;
} Point;

int add(int a, int b) {
    return a + b;
}

int main() {
    /*Test case with a null pointer*/
    int* ptr = NULL;
    int (*func)(int, int) = add;
    int* ptr2 = malloc(sizeof(int));
     int arr[] = {1, 2, 3, 4, 5};
    int* ptr3 = arr;
    Point* p = malloc(sizeof(Point));

    _printf("Null pointer: %p\n", ptr);
    printf("Null pointer: %p\n", ptr);

    /*Test case with a non-null pointer*/ 
    
    _printf("Non-null pointer: %p\n", ptr2);
    printf("Non-null pointer: %p\n", ptr2);

    /*Test case with a pointer to an array*/

    _printf("Pointer to array: %p\n", ptr3);
    printf("Pointer to array: %p\n", ptr3);

    /*Test case with a pointer to a struct*/
    
    _printf("Pointer to struct: %p\n", p);
    printf("Pointer to struct: %p\n", p);

    /*Test case with a pointer to a function*/
    _printf("Pointer to function: %p\n", func);
    printf("Pointer to function: %p\n", func);

    return 0;
}
