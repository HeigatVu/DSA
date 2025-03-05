/*
Solving valid parentheses in leetcode.
By Duc
Feb 23, 2025
*/

/*
Input: a string contains just the characters '(', ')', '{', '}', '[' and ']'
        Valid: 1. Open brackets must be closed in the correct order.
              2. Open brackets must be closed in the correct order.
              3. Every close bracket has a corresponding open bracket of the
same type. Ouput: true or false Contraints: 1 <= s.length <= 10^4. s consists of
parentheses only '(', ')', '{', '}', '[' and ']'.
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

class Solution {
public:
  // Using stack with less optimal code

  // bool isValid(std::string &s) {
  //   if (s.length() % 2 == 1) {
  //     return false;
  //   }
  //   int flag = 0;
  //   std::stack<char> stackChar;
  //   for (char c : s) {
  //     if (c == '(' || c == '{' || c == '[') {
  //       stackChar.push(c);
  //     } else {
  //       if (stackChar.empty()) {
  //         return false;
  //       }
  //       char topChar = stackChar.top();
  //       stackChar.pop();
  //       if ((topChar == '(' && c != ')') || (topChar == '{' && c != '}') ||
  //           (topChar == '[' && c != ']')) {
  //         flag++;
  //       }
  //     }
  //   }
  //   if (flag == (s.length() / 2)) {
  //     return true;
  //   }
  //   return false;
  // }

  // Using stack with more optimal code
  bool isValid(std::string &s) {
    std::stack<char> stackChar;
    for (char c : s) {
      if (!stackChar.empty() && (c == ')' && stackChar.top() == '(') ||
          (c == '}' && stackChar.top() == '{') ||
          (c == ']' && stackChar.top() == '[')) {
        stackChar.pop();
      } else {
        stackChar.push(c);
      }
    }
    return stackChar.empty();
  }
};
