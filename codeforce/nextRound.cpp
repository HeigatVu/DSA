/*
Next round was rated 800 in codeforce.
By Duc
Feb 27, 2025
*/

/*
Input: first line contains a two integers n and k seperated by a single space
        Second line contains n space-sperateed integers a1, a2,...,an which is
descending order Output: the number of participants who advance to the next
round Contraints: 1 <= k <= n <= 50 0 <= ai <= 100 and ai >= ai + 1
*/

#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);

int main() {
  int n, k;
  std::cin >> n >> k;
  // int outParticipants = 0;
  // int k_score = 0;
  // int score = 0;
  // int result = 0;
  // for (int i = 0; i < n; i++) {
  //   std::cin >> score;
  //   if (i == k) {
  //     k_score = score;
  //   }
  //
  //   if ((score > 0) && (i <= k || score >= k_score)) {
  //     ++result;
  //   } else if (i > k && score < k_score) {
  //     break;
  //   }
  // }

  std::vector<int> scores;
  for (int i = 0; i < n; i++) {
    int score;
    std::cin >> score;
    scores.push_back(score);
  }
  int threshold = scores[k - 1];
  int result = 0;
  for (int i = 0; i < n; i++) {
    if (scores[i] >= threshold && scores[i] > 0) {
      ++result;
    }
  }

  std::cout << (result) << std::endl;
  return 0;
}
