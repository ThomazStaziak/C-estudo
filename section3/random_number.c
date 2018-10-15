#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    // here we use the 'unsigned' to force the number come higher than 0 and the time function to get current unix number from the machine
    srand((unsigned) time(NULL));

    // putting a random value between 0 and 100 to variable
    int randomNumber = rand() % 101;

    // printing the value from 'randomNumber'
    printf("%i\n", randomNumber);
}
