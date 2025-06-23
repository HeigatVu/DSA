/*
Translation codeforce rate 800
By Duc
June 24, 2025
*/

/*
Input: first string is original string
      second string is resevely written of string above
Output: second is written reversely first -> "YES" -> "NO"
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

bool coutSameString(string s, string t) {
  int flag = 0;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == t[n - i - 1]) {
      flag++;
    }
  }
  if (flag == n) {
    return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;
  string t;
  cin >> t;

  if (s.size() != t.size()) {
    cout << "NO" << endl;
  } else {
    if (coutSameString(s, t)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
