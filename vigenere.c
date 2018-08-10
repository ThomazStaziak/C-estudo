#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char** argv)
{
    if (argc != 2)
    {
      printf("Usage: ./vigenere k\n");
      return 1;
    } else {
      for (int val = 0; val < strlen(argv[1]); val++)
      {
        if (!isalpha(argv[1][val]))
        {
          printf("You can only use alpha values!\n");
          return 1;
        }
      }
    }

    string key = argv[1];

    int keyLen = strlen(key);

    int k = 0, nKey;

    string pText = get_string("Enter your plaintext: ");

    printf("ciphertext: ");
    for (int i =  0; i < strlen(pText); i++)
    {
        nKey = tolower(key[k % keyLen]) - 'a';
        if (isalpha(pText[i]))
        {
          if(islower(pText[i]))
          {
            printf("%c", (pText[i] - 'a' + nKey) % 26 + 'a');
          } else if (isupper(pText[i])) {
            printf("%c", (pText[i] - 'A' + nKey) % 26 + 'A');
          }
          k++;
        } else {
          printf("%c", pText[i]);
        }
    }
    printf("\n");
}
// program to encipher text with vigenère algorithm
