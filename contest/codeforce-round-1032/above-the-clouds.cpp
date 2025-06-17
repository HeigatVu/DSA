/*
Input: integer t -> the number of test cases
        first line of test case -> n -> the length of the string s
        second line of test case -> string s with length n
Output: "Yes" if non-empty string a, b and c with b = a + c
        "No"
Constraints: 1 <= t <= 10^4
              3 <= n <= 10^5
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

// bool solve(string s) {
//   int n = s.length();
//
//   // Try all possible positions for the middle string b
//   for (int start = 1; start < n - 1; start++) {
//     for (int len = 1; len <= n - start - 1; len++) {
//       // Extract b
//       string b = s.substr(start, len);
//
//       // Extract a and c
//       string a = s.substr(0, start);
//       string c = s.substr(start + len);
//
//       // Check if b is substring of a+c
//       string combined = a + c;
//       if (combined.find(b) != string::npos) {
//         return true;
//       }
//     }
//   }
//   return false;
// }
//
// int main() {
//   int t;
//   cin >> t;
//
//   while (t--) {
//     int n;
//     string s;
//     cin >> n >> s;
//
//     if (solve(s)) {
//       cout << "Yes\n";
//     } else {
//       cout << "No\n";
//     }
//   }
//
//   return 0;
// }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> cnt(26, 0);
    for (auto c : s) {
      cnt[c - 'a']++;
    }

    bool result = false;
    for (int i = 0; i < 26; i++) {
      if (cnt[i] >= 3) {
        result = true;
      } else if ((cnt[i] == 2) &&
                 (((s[0] - 'a') != i) || ((s.back() - 'a') != i))) {
        result = true;
      }
    }
    cout << (result ? "Yes" : "No") << endl;
  }
  return 0;
}
