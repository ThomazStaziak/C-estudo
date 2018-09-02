#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    // declaring the variables
    int number1, number2;
    char operators[2];

    //getting the value for number1
    printf("Insert a number: ");
    scanf("%i", &number1);

    // getting the value for the operators
    printf("Insert the operation: ");
    scanf("%s", &operators[1]);

    // getting the value for number2
    printf("Insert another number: ");
    scanf("%i", &number2);

    // checking the operators value with the strncmp function, wich is used to compare strings
    // how to use the strncmp function? is simple the first parameter is a string and the second too but the third is a number oh characters wich will be compared between the two strings
    if(strncmp(&operators[1], "+", 1) == 0) {
        printf("the result is: %d\n", number1 + number2);
    } else if (strncmp(&operators[1], "-", 1) == 0) {
        printf("the result is: %d\n", number1 - number2);
    } else if (strncmp(&operators[1], "/", 1) == 0) {
        printf("the result is: %d\n", number1 / number2);
    } else if (strncmp(&operators[1], "*", 1) == 0) {
        printf("the result is: %d\n", number1 * number2);
    } else {
        printf("the operator is invalid try again! %c\n", operators[1]);
        return 0;
    }

}
