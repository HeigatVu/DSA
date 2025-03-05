/*
Bit++ implementation was rated 800 in codeforce.
By Duc
Feb 23, 2025
*/

/*
Input: an integer n (1 <= n <= 150)
      n statement in next lines, each statement contains exactly one operation
(++, --) + x variable Output: print the value of x
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int bitOperatator(char *statementOperation) {
  if (statementOperation[1] == '+') {
    return 1;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  char statementOperation[4];
  int x = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> statementOperation;
    x += bitOperatator(statementOperation);
  }
  std::cout << x << std::endl;
  return 0;
}
