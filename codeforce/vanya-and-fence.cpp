

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int n;
  int h;
  cin >> n >> h;
  int result = 0;
  while (n > 0) {
    int a;
    cin >> a;
    if (a > h) {
      result += 2;
    } else {
      result += 1;
    }
    n--;
  }
  cout << result << endl;

  return 0;
}
