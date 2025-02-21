/*
#4A. Watermelon (rating 800) in codeforce
By Duc
Feb 20, 2025
*/

#include <iostream>
#include <string>

std::string checkSplitWatermelon(int weighed) {
  std::string result;
  if (weighed % 2 == 0 && weighed >= 4) {
    result = "YES";
  } else {
    result = "NO";
  }
  return result;
}

int main() {
  int weighed;
  std::cin >> weighed;
  std::cout << checkSplitWatermelon(weighed) << std::endl;

  return 0;
}
