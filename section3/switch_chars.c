#include <stdio.h>
#include <stdlib.h>

int main () {
    char letter;

    printf("Enter a vowel:\n");
    scanf("%c", &letter);

    switch (letter) {
        case 'a':
            printf("U choosed 'a'\n");
        break;
        case 'e':
            printf("U choosed 'e'\n");
        break;
        case 'i':
            printf("U choosed 'i'\n");
        break;
        case 'o':
            printf("U choosed 'o'\n");
        break;
        case 'u':
            printf("U choosed 'u'\n");
        break;
        default:
            printf("U didn't choose a vowel\n");
    }
}
