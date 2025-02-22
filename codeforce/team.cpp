/*
Team was rated 800 in codeforce.
By Duc
Feb 22, 2025
*/

#include <bits/stdc++.h>
#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

/*
Input: integer n defines the number of problems in the contest
        Each problem will discuss by three people (P, V, T) if at leasst two
people agree -> +1 problem solved output: the number of problems solved in
contest
*/

int countSolution(std::vector<int> &votes) {
  int count = std::count(votes.begin(), votes.end(), 1);
  if (count >= 2) {
    return 1;
  }

  return 0;
}

int main() {
  int n;
  std::cin >> n;
  int problemsSolved = 0;
  for (int i = 0; i < n; i++) {
    int P, V, T;
    std::cin >> P >> V >> T;
    std::vector<int> votes = {P, V, T};
    problemsSolved += countSolution(votes);
  }
  std::cout << problemsSolved << std::endl;
  return 0;
}
