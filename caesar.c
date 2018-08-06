#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char** argv)
{
  // if the parameters on command line isn't 2 the program doesn't work for example :
  // ./caesar 2 => works bacause the first is ./caesar and the second is 2
  // ./caesar => doesn't work because there's only one parameter
  if (argc != 2)
  {
      printf("Usage: ./caesar k\n");
      return 1;
  }

  // taking the key parameter with string and passing to int with atoi function
  int key = atoi(argv[1]), i;

  if (key < 0)
  {
      printf("The key must to be positive:\n");
  }

  // encipher algorithm
  // Ct = (Pt + K - a or A) % 26 + a or A

  string pText = get_string("Enter your plaintext: ");

  printf("ciphertext: ");
  for (i =  0; i < strlen(pText); i++) {
      if (islower(pText[i])) {
        printf("%c", (pText[i] - 'a' + key) % 26 + 'a');
      } else if (isupper(pText[i])) {
        printf("%c", (pText[i] - 'A' + key) % 26 + 'A');
      } else {
        printf("%c", pText[i]);
      }
  }
  printf("\n");
  // program to encipher text with caeser algorithm
}
