

#include <bits/stdc++.h>
#include <unordered_set>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

bool checkYear(int year) {
  unordered_set<int> digitYear;
  int temp = year;
  int count = 0;
  while (temp > 0) {
    count++;
    digitYear.insert(temp % 10);
    temp /= 10;
  }
  return digitYear.size() == count;
}
int main() {
  int year;
  cin >> year;

  for (int i = year + 1; i <= 9000; i++) {

    if (checkYear(i)) {
      cout << i << endl;
      break;
    }
  }
}
