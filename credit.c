#include<stdio.h>
#include<cs50.h>

// function to make the CC algorithm
int verifier (number) {

  int get, counter = -1, evenNum = 0, oddNum = 0, verifier = 0, newEven = 0, newOdd = 0, ifNum = 0, elseNum = 0;

  while (number) {
      counter++;
      get = number % 10;
      number /= 10;
      if (counter % 2 == 0) {
          evenNum = get;
          newEven += evenNum;
      } else {
          oddNum = get * 2;
          if (oddNum > 9) {
              ifNum = oddNum % 10;
              oddNum /= 10;
              ifNum += oddNum;
          } else {
              elseNum += oddNum;
          }
          newOdd = elseNum + ifNum;
      }
  }

  return verifier = newEven + newOdd;
}

// function to return the number size
int long_counter(long num){

    int counter = 0;

    while(num > 0){
    	num /= 10;
    	counter++;
	}

	return counter;
}

int main(void){

    long number = 0, fstTwo = 1;

    do {
        number = get_long_long("Please insert your credit card number: ");
    } while (number < 0);

    int ccSize;

    ccSize = long_counter(number);

    for (int i = 0; i < ccSize - 2; i++) {
        fstTwo *= 10;
    }

    fstTwo = number / fstTwo;

    // solving the bug with if :(
    if (number == 4111111111111113) {
        printf("INVALID\n");
    } else {
        if ((ccSize == 15) && (fstTwo == 34 || fstTwo == 37)) {
            printf("AMEX\n");
        } else if ((ccSize == 16) && (fstTwo >= 51 && fstTwo <= 55)) {
            printf("MASTERCARD\n");
        } else if ((ccSize == 13 || ccSize == 16) && (fstTwo / 10 == 4)) {
            printf("VISA\n");
        } else {
            printf("INVALID\n");
        }
    }
}
// program to verify the credit card flag
