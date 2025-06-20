/*
Bear and big brother in code force with rate 800
By Duc
Jun 19, 2025
*/

/*
Input: two integer a and b (1 <= a <= b <= 10)
Output: the integer number of years
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int result = 0;
  while (a <= b) {
    result++;
    a *= 3;
    b *= 2;
  }

  cout << result << endl;

  return 0;
}
