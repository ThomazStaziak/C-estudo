#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int i;

    // getting a random number
    srand((unsigned) time(NULL));
    int randNumber = rand();

    // setting the limit with the initial value of 0
    int limit = 0;

    // getting the limit number for the table
    printf("Enter a number for the limit of the table: ");
    scanf("%d", &limit);

    // make a new attribution for the randNumber
    randNumber = randNumber % limit;

    // making the math for the table using the 'randNumber' multiplied by 'i'
    for (i = 0; i <= 10; i++) {
        printf("%d X %d = %d\n", randNumber, i, randNumber * i);
    }
}
