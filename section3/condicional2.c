#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1, num2;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter a number: ");
    scanf("%d", &num2);

    // checking if the first number is higher than second
    if (num1 > num2) {
        printf("O número %d é maior que o número %d\n", num1, num2);
    // checking if the first number is equal second
    } else if (num1 == num2) {
        printf("Os números são iguais\n");
    // checking if the second number is higher than first
    } else if (num1 < num2) {
        printf("O número %d é maior que o número %d\n", num2, num1);
    }

}
