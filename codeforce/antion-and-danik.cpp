/*

*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

int main() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int anton = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A') {
      anton++;
    }
  }

  if ((n - anton) > anton) {
    cout << "Danik" << endl;
  } else if ((n - anton) == anton) {
    cout << "Friendship" << endl;
  } else {
    cout << "Anton" << endl;
  }
  return 0;
}
