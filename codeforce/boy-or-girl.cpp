/*
Boy or girl in codeforce
By Duc
16 Jun, 2025
*/

/*
Input: non-empty string s with lowercase English letter
Output: if distinct character is odd -> male -> "ignore him" | even -> female ->
"chat with her" Constrants: s <= 100 letters
*/

#include <bits/stdc++.h>
#include <unordered_set>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int cntDistinct(std::string str) {
  std::unordered_set<char> s;

  for (int i = 0; i < str.size(); i++) {
    s.insert(str[i]);
  }
  return s.size();
}

int main() {
  std::string str;
  std::cin >> str;

  int a = cntDistinct(str);
  if (a % 2 == 0) {
    std::cout << "CHAT WITH HER!" << std::endl;
  } else {
    std::cout << "IGNORE HIM!" << std::endl;
  }

  return 0;
}
