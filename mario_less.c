#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do {
        n = get_int("Please insert a value for the height of your pyramid:");
    } while (n < 0 || n > 23);

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i + 1; j--) {
            printf(" ");
        }
        for (int k = 0; k < i + 2; k++) {
            printf("#");
        }
        printf("\n");
    }
// program to return a one side pyramid
