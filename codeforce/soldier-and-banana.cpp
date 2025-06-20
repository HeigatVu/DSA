/*
Soldier and banana in code force rate 800
By Duc
June 20, 2025
*/

/*
Input: integer k (cost of frist banana), n (soldier's dollar), w (number of
banana that he wants) Output: one integer that soldier must borrow Constraints:
1 <= k, w <= 1000, 0 <= n <= 10^9
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int k;
  int n;
  int w;
  cin >> k >> n >> w;
  int price = 0;

  for (int i = 1; i <= w; i++) {
    price += i * k;
  }

  int borrow = price - n;
  int result = 0;
  if (borrow <= 0) {
    result = 0;
  } else {
    result = borrow;
  }
  cout << result << endl;
  return 0;
}
