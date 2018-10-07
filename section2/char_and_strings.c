#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
 // declaring the variables
 char var1 = 'a', var2;

 //printing the var1 value
 printf("%c\n", var1);

 // taking the string and putting into the var2
 printf("Enter a word:");
 scanf("%s", &var2);

 // printing the var2 value
 printf("%s", &var2);
}
