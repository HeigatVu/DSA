/*
The stones on the table in code force rate 800
By Duc
Jun 20, 2025
*/

/*
Input: first line is integer n
        second line is string s containing R, G, B
Output: integer
Constraints: 1 <= n <= 50
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int result = 0;
  for (int i = 0; i < s.size() - 1; i++) {
    if (s[i] == s[i + 1]) {
      result++;
    }
  }
  cout << result << endl;

  return 0;
}
