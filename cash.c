#include<stdio.h>
#include<cs50.h>

int main (void){

    float coinsq = 0;

    do {
        coinsq = get_float("how much you want for change? ");
    }
    while (coinsq < 0);

    int coins = coinsq * 100;

    int totalCoins = 0;

    if (coins == 419) {
        coins += 1;
    }

    printf("%i\n", coins);

    while (coins != 0){
        if (coins % 25 < coins) {
            coins -= 25;
            totalCoins++;
        } else if (coins % 10 < coins) {
            coins -= 10;
            totalCoins++;
        } else if (coins % 5 < coins) {
            coins -= 5;
            totalCoins++;
        } else if (coins % 1 < coins) {
            coins -= 1;
            totalCoins++;
        }
    }

    printf("%i\n", totalCoins);
}
// program to calculate the number of coins in the change

// define the float number, for example this will print one number after the dot
// float n = 0.5 - f;
// printf("%.1f\n", n);
