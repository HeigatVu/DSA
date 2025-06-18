/*
Word capitalization in code force with rated 800
By Duc
Jun 18, 2025
*/

/*
Input: string s (non-emptyy word) consists of lowercase and uppercase English
letter. Output: given word after capitalization. Constraints: s <= 10^3
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)
using namespace std;

int main() {
  string s;
  cin >> s;

  string laterString = s.substr(1);
  char firstLetter;
  if (islower(s[0])) {
    firstLetter = s[0] - 'a' + 'A';
  } else {
    firstLetter = s[0];
  }

  string result = firstLetter + laterString;
  cout << result << endl;

  return 0;
}
