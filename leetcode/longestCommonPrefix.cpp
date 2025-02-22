/*
Longest common prefix
By Duc
Feb 22, 2025
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

class Solution {
public:
  // Naive solution with nested loops
  std::string longestCommonPrefixNaive(std::vector<std::string> &strs) {
    /*
    Input: Array of strings
    OUtput: the longest common prefix or "" if there is no common prefix
    Constraints: 1 <= strs.length <= 200, 0 <= strs[i].length <= 200, strs[i]
    consists of lower-case English letters. Ex: strs =
    ["flower","flow","flight"] => "fl", strs = ["dog","racecar","car"] => ""
    */
    if (strs.empty()) {
      return "";
    }

    std::string longestCommonPrefix = "";
    for (int charIdx = 0; charIdx < strs[0].length(); charIdx++) {
      char currentChar = strs[0][charIdx];
      for (int compareChar = 1; compareChar < strs.size(); compareChar++) {
        if (charIdx >= strs[compareChar].length() ||
            currentChar != strs[compareChar][charIdx]) {
          return longestCommonPrefix;
        }
      }
      longestCommonPrefix += currentChar;
    }
    return longestCommonPrefix;
  }
};
