#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite outro número: ");
    scanf("%d", &num2);
    
    // vendo se o primeiro número é maior que o segundo
    if (num1 > num2) {
        printf("O número %d é maior que o número %d\n", num1, num2);
    // vendo se o primeiro número é igual ao segundo
    } else if (num1 == num2) {
        printf("Os números são iguais\n");
    // vendo se o segundo número é maior que primeiro
    } else if (num1 < num2) {
        printf("O número %d é maior que o número %d\n", num2, num1);
    }

}
