#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // here i declare the number which will have some integer value and the show which will show the number value
    int number = 5, show;

    // here i point to the number's memory position
    int *pointer = &number;

    // here i give the pointer value to show
    show = *pointer;

    // here i print the show variable
    printf("%d\n", show);
}
