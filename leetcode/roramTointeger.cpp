/*
Roman to integer
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
  // Reading Roman number from right to left

  // int romanToInt(std::string s) {
  //   std::unordered_map<char, long> romanRule = {
  //       {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
  //       {'C', 100}, {'D', 500}, {'M', 1000}, {'0', 0}};
  //   std::string newS = s;
  //   newS.push_back('0');
  //   int numValue = 0;
  //   for (int i = 0; i < s.length() - 1; i++) {
  //     if (romanRule[newS[i]] >= romanRule[newS[i + 1]]) {
  //       numValue += romanRule[newS[i]];
  //     } else {
  //       numValue += (romanRule[newS[i + 1]] - romanRule[newS[i]]);
  //       i++;
  //     }
  //   }
  //   return numValue;
  // }

  // Reading Roman number from left to right

  int romanToInt(std::string s) {
    std::unordered_map<char, int> romanValues = {
        {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};

    int result = 0;
    int prevValue = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
      int currentValue = romanValues[s[i]];
      if (currentValue >= prevValue) {
        result += currentValue;
      } else {
        result -= currentValue;
      }
      prevValue = currentValue;
    }

    return result;
  }
};
