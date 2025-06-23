/*
wrong substraction in codeforce rate 800
By Duc
June 21, 2025
*/

/*
Input: integer n (the number to substraction) and k (the number time to
substraction) Output: print integer after substracting Constraints: 2 <= n <=
10^9, 1 <= k <= 50
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;

  for (int i = 0; i < k; i++) {
    if (n % 10 == 0) {
      n /= 10;
    } else {
      n -= 1;
    }
  }

  cout << n << endl;
  return 0;
}
