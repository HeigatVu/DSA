/*
Elephane in code force rate 800
By Duc
June 20, 2025
*/

/*
Input: integer x (the distance to friend's house)
Output: min the number of step
Constraints: 1 <= x <= 10000000
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int x;
  cin >> x;

  int result = (x + 4) / 5;

  cout << result << endl;
  return 0;
}
