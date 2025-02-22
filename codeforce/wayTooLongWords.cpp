/*
Way too long words was rated 800 in codeforce.
By Duc
Feb 22, 2025
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

/*
Input: integer n define the number of words
        Each line we will input words (lowercase, latin letter, range[1, 100])
output: if word's length >= 10 -> replace the first char + number of chars
between first and last char + the last char
Ex: Input: 4 word localization
          internationalization
          pneumonoultramicroscopicsilicovolcanoconiosis
    output: word
            l10n
            i18n
            p43s
*/

std::vector<std::string> wordAbbreviation(int n,
                                          std::vector<std::string> &words) {
  std::vector<std::string> result;
  for (int word = 0; word < n; word++) {
    if (words[word].length() <= 10) {
      result.push_back(words[word]);
    } else {
      std::string abbreviationWord = "";
      char firstChar = words[word][0];
      char lastChar = words[word][words[word].length() - 1];
      std::string midWord = std::to_string(words[word].length() - 2);
      abbreviationWord += (firstChar + midWord + lastChar);
      result.push_back(abbreviationWord);
    }
  }
  return result;
}

int main() {
  int n;
  std::vector<std::string> words;
  words.reserve(n);
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::string word;
    std::cin >> word;
    words.push_back(word);
  }
  std::vector<std::string> result = wordAbbreviation(n, words);
  for (int i = 0; i < n; i++) {
    std::cout << result[i] << std::endl;
  }
  return 0;
}
