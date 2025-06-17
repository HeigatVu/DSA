/*
Input: integer t in first line to define test case
        first line of each test case -> number of positions to visit n and
starting point s second line contains n integer (x, x1, x2, ...) with xn < xn+1
Output: min number of steps
Constraints: 1 <= t <= 1000
              1 <= n <= 10, 1 <= s <= 100
              1 <= xn <= 100
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int main() {
  int t;
  std::cin >> t;

  while (t--) {
    int n, s;
    std::cin >> n >> s;

    std::vector<int> x(n);
    for (int i = 0; i < n; i++) {
      std::cin >> x[i];
    }
    int min_x = x[0];
    int max_x = x[n - 1];

    int steps;
    if (s <= min_x) {
      steps = max_x - s;
    } else if (s >= max_x) {
      steps = s - min_x;
    } else {
      steps = std::min(max_x - s, s - min_x) + (max_x - min_x);
    }

    std::cout << steps << std::endl;
  }
  return 0;
}
