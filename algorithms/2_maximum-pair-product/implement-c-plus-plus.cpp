/*
Implement in C++
By Duc
Feb 17, 2025
*/

#include <algorithm>
#include <iostream>
#include <vector>

long int MaxPairWiseProductNaive(const std::vector<long long> &numbers) {
  long long maxProduct = 0;
  for (long int first = 0; first < numbers.size(); first++) {
    for (long int second = first + 1; second < numbers.size(); second++) {
      maxProduct = std::max(maxProduct, numbers[first] * numbers[second]);
    }
  }
  return maxProduct;
}

long int MaxPairWiseProductFast(const std::vector<long long> &numbers) {
  if (numbers.size() < 2) {
    return 0;
  }
  long long maxProduct = 0;
  long long firstMax = -10000000;
  long long secondMax = -10000000;

  for (long int i = 0; i < numbers.size(); i++) {
    if (numbers[i] > firstMax) {
      secondMax = firstMax;
      firstMax = numbers[i];
    } else if (numbers[i] > secondMax) {
      secondMax = numbers[i];
    }
  }
  maxProduct = firstMax * secondMax;
  return maxProduct;
}

int main() {
  int n;
  std::cin >> n;
  std::vector<long long> numbers(n);
  for (int i = 0; i < n; i++) {
    std::cin >> numbers[i];
  }

  // std::cout << "The maximum pairwise product is: "
  //           << MaxPairWiseProductNaive(numbers) << std::endl;
  // std::cout << MaxPairWiseProductNaive(numbers);
  std::cout << MaxPairWiseProductFast(numbers);

  return 0;
}
