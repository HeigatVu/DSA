/*
Beautiful matrix in codeforces.
By Duc
Mar 14, 2025
*/

/*
Input: a zero matrix of size 5x5 with a number one in the matrix.
Output: the minimum number of moves to make the matrix beautiful.
Constraints: 1 <= i <= 5 is rows of matrix, 1 <= j <= 5 is columns of matrix,
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int main() {
  int matrix[5][5];
  int minMoves = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      std::cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        minMoves = std::abs(2 - i) + std::abs(2 - j);
        break;
      }
    }
  }
  std::cout << minMoves << std::endl;
  return 0;
}
