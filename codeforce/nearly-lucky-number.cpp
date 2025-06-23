/*
nearly lucky number codeforce rate 800
By Duc
June 21, 2025
*/

/*
Input: integer n
Output: Print "YES" if n is nearly lucky number, "NO" for remaining
Constraints: 1 <= n <= 10^18
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

bool isLucky(int num) {
  if (num == 0)
    return false;
  while (num > 0) {
    int digit = num % 10;
    if (digit != 4 && digit != 7) {
      return false;
    }
    num /= 10;
  }
  return true;
}

int main() {
  string n;
  cin >> n;

  int luckyCount = 0;
  for (char c : n) {
    if (c == '4' || c == '7') {
      luckyCount++;
    }
  }

  if (isLucky(luckyCount)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
