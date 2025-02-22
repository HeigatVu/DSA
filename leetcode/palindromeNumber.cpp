/*
Solution for palindrome_number
By Duc
Feb 21, 2025
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

class Solution {
public:
  /*
  Input: an integer representing the number to check if it is a palindrome.\
  Ouput: true if the number is a palindrome, false otherwise.
  Constraints: -2^31 <= x <= 2^31 - 1
  */

  // Solution with using convert number to vector of char

  // std::vector<char> numToVectorChar(int num) {
  //   std::vector<char> numString;
  //   while (num != 0) {
  //     numString.push_back('0' + (num % 10));
  //     num /= 10;
  //   }
  //   return numString;
  // }
  //
  // bool isPalindrome(int x) {
  //   if (x < 0) {
  //     return false;
  //   }
  //
  //   if (x == 0) {
  //     return true;
  //   }
  //   std::vector<char> numChar = numToVectorChar(x);
  //   int sizeVectorChar = numChar.size();
  //   int interator = sizeVectorChar / 2;
  //   int countSameNum = 0;
  //   for (int i = 0; i < interator; i++) {
  //     if (numChar[i] == numChar[sizeVectorChar - 1]) {
  //       countSameNum++;
  //     }
  //     sizeVectorChar -= 1;
  //   }
  //
  //   if (countSameNum == interator) {
  //     return true;
  //   }
  //   return false;
  // }

  // Solution without using convert number to vector of char
  bool isPalindrome(int x) {
    if (x < 0) {
      return false;
    }
    if (x == 0) {
      return true;
    }
    int trueNum = x;
    int reverseNum = 0;

    while (trueNum != 0) {
      int digit = trueNum % 10;
      reverseNum = reverseNum * 10 + digit;
      trueNum /= 10;
    }
    return (reverseNum == x);
  }
};

int main() {
  int x;
  std::cin >> x;
  Solution solution;
  std::cout << (solution.isPalindrome(x) ? "true" : "false") << std::endl;
  return 0;
}
