/*
Implement with C++
By Duc
Feb 16, 2025
*/

#include <iostream>

int sumOfDigits(int first, int second) { return first + second; }

int main() {
  int a = 0;
  int b = 0;
  std::cout << "Enter fist number: \n";
  std::cin >> a;
  std::cout << "Enter second number: \n";
  std::cin >> b;
  std::cout << "Sum of digits: " << sumOfDigits(a, b) << std::endl;
  return 0;
}
