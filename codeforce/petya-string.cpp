/*
Petya and strings in codeforce was rated 800.
By Duc
Mar 24, 2025
*/

#include <iostream>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int checkToString(std::string s1, std::string s2) {
  for (int i = 0; i < s1.length(); i++) {
    if ((std::tolower(s1[i]) - std::tolower(s2[i])) > 0) {
      return 1;
    } else if ((std::tolower(s1[i]) - std::tolower(s2[i])) < 0) {
      return -1;
    }
  }
  return 0;
}

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;
  int result = checkToString(s1, s2);
  if (result == 1) {
    std::cout << "1" << std::endl;
  } else if (result == -1) {
    std::cout << "-1" << std::endl;
  } else {
    std::cout << "0" << std::endl;
  }
  return 0;
}
