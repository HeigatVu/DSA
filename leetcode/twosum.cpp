/*
My solution for two sum in leetcode
By Duc
21 Feb, 2025
*/

#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);                                                                  \
  cout.tie(0)

class Solution {
public:
  std::vector<int> twoSumNaive(std::vector<int> &nums, int target) {
    if (nums.size() < 2) {
      return {};
    }
    for (int firstId = 0; firstId < nums.size(); firstId++) {
      int diff = target - nums[firstId];
      for (int secondId = firstId + 1; secondId < nums.size(); firstId++) {
        if (nums[secondId] == diff) {
          return {firstId, secondId};
        }
      }
    }
    return {};
  }

  // Using solution without hash map
  std::vector<int> twoSumFaster(std::vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      auto it = std::find(nums.begin() + i + 1, nums.end(), complement);
      if (it != nums.end()) {
        return {i, static_cast<int>(it - nums.begin())};
      }
    }

    return {};
  }

  // Using hash map
  std::vector<int> twoSumWithHashMap(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> numsMap;
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (numsMap.find(complement) != numsMap.end()) {
        return {numsMap[complement], i};
      }
      numsMap[nums[i]] = i;
    }
    return {};
  }
};
