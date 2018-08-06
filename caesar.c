#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (int argc, char** argv)
{
  if (argc != 2)
  {
      printf("Key must to be at least 2: \n");
      return 1;
  }

  int key = atoi(argv[1]), i;

  if (key < 0)
  {
      printf("The key must to be positive:\n");
  }

  // encipher algorithm
  // Ct = (Pt + K - a or A) % 26 + a or A

  string pText = get_string("Enter your plaintext: ");

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
