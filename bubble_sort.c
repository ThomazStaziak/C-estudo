#include <stdio.h>
#define MAX 10

int main(void)
{
    int i, j, help, array[MAX];

    for (i = 0; i < MAX; i++) {
        printf("Enter a number please:");
        scanf("%d", &array[i]);
    }

    printf("Your numbers before:\n");

    for (i = 0; i < MAX; i++) {
        printf("%d\n", array[i]);
    }

    // here we take the main position and her successor to check who is the higher
    // if the main is higher we store her in a variable and pass the successor
    // to the main position and the variable who have stored a main position
    // we pass to the successor. If not we don't make anything
    for (i = 0; i < MAX; i++) {
        for(j = 0; j < MAX - 1; j++) {
            if (array[j] > array[j + 1]) {
                help = array[j];
                array[j] = array[j + 1];
                array[j + 1] = help;
            }
        }
    }

    printf("Your numbers after:\n");

    for (i = 0; i < MAX; i++) {
        printf("%d\n", array[i]);
    }
}
// program to organize the array elements in asc
