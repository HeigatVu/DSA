/*
Implement in C
By Duc
Feb 18, 2025
*/

#include <stdio.h>

int maxPairWiseProductNaive(const int numbers[], int arrLength) {
  int maxProduct = 0;

  for (int first = 0; first < arrLength; first++) {
    for (int second = first + 1; second < arrLength; second++) {
      if (maxProduct < (numbers[first] * numbers[second])) {
        maxProduct = numbers[first] * numbers[second];
      }
    }
  }
  return maxProduct;
}

int main() {
  printf("Enter the size of the array: \n");
  int arrLength;
  scanf("%d", &arrLength);

  int numbers[arrLength];
  printf("Enter the array elements: \n");
  for (int i = 0; i < arrLength; i++) {
    scanf("%d", &numbers[i]);
  }

  printf("The maximum pairwise product is: %d",
         maxPairWiseProductNaive(numbers, arrLength));
}
