#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("Hello i'm your calculator, let's start? [yes]/[no]: ");

    char answer[4];
    int option = 0, numberOne = 0, numberTwo = 0;

    scanf("%s", answer);

    if(strcmp(answer, "yes") == 0) {
        printf("Ok, now put your first number: ");
        scanf("%i", &numberOne);
        printf(" 1) addition\n");
        printf(" 2) subtraction\n");
        printf(" 3) multiplication\n");
        printf(" 4) division\n");
        printf("Ok, now choose operation: ");
        scanf("%i", &option);
        printf("Ok, now put your second number: ");
        scanf("%i", &numberTwo);
        if  (option > 0 && option < 5) {
            switch (option) {
                case 1 :
                    printf("Your result is: %i\n", numberOne + numberTwo);
                break;
                case 2 :
                    printf("Your result is: %i\n", numberOne - numberTwo);
                break;
                case 3 :
                    printf("Your result is: %i\n", numberOne * numberTwo);
                break;
                case 4 :
                    printf("Your result is: %i\n", numberOne / numberTwo);
                break;
            }
        }
    } else {
        printf("Ok bye :(\n");
    }
}
