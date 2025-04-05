/*
Input: integer t is number of test cases
      First line each test case contains an integer n (1 <= n <= 20)
      Second line contains n integers a_i (0 <= a_i <= 9)
Output: the minimum number of digits that can make a data 01.03.2025 without
concerning dots. Constraints:
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

void solve() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> digits(n);
    for (int i = 0; i < n; i++) {
      cin >> digits[i];
    }

    // Count of required digits for "01032025"
    unordered_map<int, int> required = {{0, 2}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};

    // Keep track of how many of each digit we have
    unordered_map<int, int> count;
    for (int i = 0; i < 10; i++) {
      count[i] = 0;
    }

    // Process digits one by one
    bool found = false;
    for (int i = 0; i < n; i++) {
      count[digits[i]]++;

      // Check if we have enough of each required digit
      bool can_form = true;
      for (const auto &pair : required) {
        int digit = pair.first;
        int needed = pair.second;
        if (count[digit] < needed) {
          can_form = false;
          break;
        }
      }

      if (can_form) {
        cout << i + 1 << endl;
        found = true;
        break;
      }
    }

    if (!found) {
      cout << 0 << endl;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
