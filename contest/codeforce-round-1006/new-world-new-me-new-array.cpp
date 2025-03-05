/*
Input: first line contains t defining the number of test cases
        Each test case contains 3 ints n (length of array), k (required sum), p
(boundary of segment from which numbers can be replaced) Output: Each test case,
output the minimum number of operations to achieve the final sum k in array or
-1 if it is impossible to achieve the sum k. Constraints: (1 <= t <= 1000) (1 <=
n <= 50, -2500 <= k <= 2500, 1 <= p <= 50)
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int minOperations(int n, int k, int p) {
  if (n < 1 || n > 50 || k < -2500 || k > 2500 || p < 1 || p > 50) {
    return -1;
  }
  if (k == 0) {
    return 0;
  }
  if (k == p) {
    return 1;
  }
  if (std::abs(k) == (n * p)) {
    return n;
  }
  if (std::abs(k) < p) {
    return 1;
  }
  if (std::abs(k) > (n * p)) {
    return -1;
  }
  if (std::abs(k) < (n * p)) {
    int residual = std::abs(k) % p;
    int integerOfDivide = std::abs(k) / p;
    if (integerOfDivide > n) {
      return -1;
    } else if (residual == 0) {
      return integerOfDivide;
    } else if (residual > 0) {
      return integerOfDivide + 1;
    }
  }
  return -1;
}

int main() {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    int n, k, p;
    std::cin >> n >> k >> p;
    std::cout << minOperations(n, k, p) << std::endl;
  }
  return 0;
}
