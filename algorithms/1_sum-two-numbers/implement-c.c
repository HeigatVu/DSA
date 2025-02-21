/*
Implement with C
By Duc
Feb 16, 2025
*/

#include <stdio.h>

long int sumOfTwoDigits(int firstNum, int secondNum) {
  return firstNum + secondNum;
}

int main() {
  int a;
  int b;
  printf("Enter first Number: \n");
  scanf("%d", &a);
  printf("Enter second Number: \n");
  scanf("%d", &b);
  printf("Sum of two digits: %ld", sumOfTwoDigits(a, b));
}
