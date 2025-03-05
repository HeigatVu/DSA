/*
Test code
By Duc
Feb 21, 2025
*/

#include <bits/stdc++.h>
#include <ostream>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int main() {
  std::string s = "LVIII";
  int n = s.length();
  char charArr[n + 1];
  std::string::iterator first = s.begin();
  std::cout << "First character: " << *first << std::endl;
  auto last = s.end();
  std::cout << "Last character: " << *(last - 1) << std::endl;
  for (int i = 0; i < s.length(); i++) {
    charArr[i] = s[i];
    std::cout << s[i] << std::endl;
  }

  return 0;
}
