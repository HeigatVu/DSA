/*
Domino piling was rated 800 in codeforce.
By Duc
Mar 6, 2025
*/

/*
Input: a single line you are given two integers M and N
Output: the maximum number of dominoes, which can be placed
Contrainst: 1 <= M <= N <= 16
*/

#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

int dominoPilling(int M, int N) { return (M * N) / 2; }

int main() {
  int M, N;
  std::cin >> M >> N;
  std::cout << dominoPilling(M, N) << std::endl;
  return 0;
}
