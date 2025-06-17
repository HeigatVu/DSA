/*
Helpful maths in codeforce
By Duc
Jun 16, 2025
*/

/*
Input: a string s contains only digits and character "+"
OUtput: A new ascebding order string
Constraints: digit = 1 or 2 or 3
             s <= 100 character long
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

int main() {
  std::string num_str;
  std::cin >> num_str;

  std::vector<int> numbers;
  for (int i = 0; i < num_str.length(); i++) {
    if (num_str[i] != '+') {
      numbers.push_back(num_str[i] - '0');
    }
  }

  std::sort(numbers.begin(), numbers.end());

  for (int i = 0; i < numbers.size(); i++) {
    std::cout << numbers[i];
    if (i < numbers.size() - 1) {
      std::cout << '+';
    }
  }

  std::cout << std::endl;

  return 0;
}
