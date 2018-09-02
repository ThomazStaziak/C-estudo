#include <stdlib.h>
#include <stdio.h>

int main()
{
    //declaring variables
    int var1 = 5, var2;

    // printing variables
    printf("the var1 value is: %d\n", var1);

    // changing the var1 value
    var1 = 10;

    //printing the new value
    printf("now the var1 value is: %d\n", var1);

    // putting a value for the var2
    printf("insert a value to var2: ");
    scanf("%d", &var2);

    // printing the var2 value
    printf("the var2 value is: %d\n", var2);
}
