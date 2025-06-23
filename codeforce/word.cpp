/*
word in codeforce rate 800
By Duc
June 20, 2025
*/

/*
Input: string s contains random upper case and lower case
Output: print right string s
Constraints: 1 <= s <= 100
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int uppercase = 0;
  int lowercase = 0;
  string s;
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    if (isupper(s[i])) {
      uppercase++;
    } else {
      lowercase++;
    }
  }

  if (uppercase > lowercase) {
    for (auto &c : s)
      c = toupper(c);
  } else {
    for (auto &c : s)
      c = tolower(c);
  }

  cout << s << endl;
  return 0;
}
