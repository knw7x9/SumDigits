/* Katherine Wilsdon
 * No IDE, using Atom / Cygwin
 * Compiler flag: -o
 * Windows
 * September 19, 2019
 * Description: Determines the sum of the digits for a number. The user can enter a
 * number as command line argument or the program will prompt the user for a number.
 */

#include <stdio.h>
#include <stdlib.h>

int SumDigits(int);

int main(int argc, char** argv){
  int inputNum;

  // When a command line argument is entered, set the input number
  if(argv[1] != NULL && atoi(argv[1]) != 0) {
    inputNum = atoi(argv[1]);
  } // If there is no command line argument, prompt the user for a number and set input number
  else {
  printf("To find the sum of the digits for a number, enter a nonnegative integer: \n");
  // Assign user input to inputNum
  scanf("%d", &inputNum);
  }

  int sumOfDigits = SumDigits(inputNum);
  // Print the sum of the digits of the inputted number
  if (sumOfDigits != -1) {
    printf("For %d, the sum of the digits is %d.\n", inputNum, sumOfDigits);
  } // Output that the user did not enter a nonnegative integer
  else {
    printf("A nonnegative integer was not entered.\n");
  }
  return 0;
}

/**
* Sums the digits in a number
*/
int SumDigits(int num){
  int sum = 0;
  int number = num;
  // If the number is negative, return - 1
  if (number < 0) {
    return -1;
  }
  else {
    // While number is not a fraction, add the last digit to sum and remove the last digit
    while (number >= 1){
      sum += number % 10;
      number = number / 10;
    }
    return sum;
  }
}
