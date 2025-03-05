/*
Apply operations to an Array.
By Duc
Mar 2, 2025
*/

/*
Input: an integer array.
Output: An integer array with rules: If nums[i] == nums[i + 1] -> Multiply
nums[i] by 2 and nums[i + 1] = 0 If nums[i] != nums[i + 1] -> Do nothing After
all 0 values at the end of the array Contraints: 2 <= nums.length <= 2000 0 <=
nums[i] <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  // 0ms runtime
  // vector<int> applyOperationsFastest(vector<int>& nums) {
  //     if (nums.size() == 2 && nums[1] != 0 && nums[0] == 0) {
  //         nums[0] = nums[1];
  //         nums[1] = 0;
  //     }
  //     vector<int> output(nums.size(), 0);
  //     int idx = 0;
  //     for (int i = 0; i < (nums.size() - 1); i++) {
  //         if (nums[i] == nums[i + 1] && nums[i] != 0) {
  //             output[idx] = nums[i] * 2;
  //             nums[i] = nums[i] * 2;
  //             nums[i + 1] = 0;
  //             idx++;
  //         } else if (nums[i] != 0 && nums[i] != nums[i + 1]) {
  //                 output[idx] = nums[i];
  //                 idx++;
  //         }
  //     }
  //     if (nums[nums.size() - 1] != 0) {
  //         output[idx] = nums[nums.size() -1];
  //     }
  //
  //     return output;
  // }
  // 2 pointer
  vector<int> applyOperations(vector<int> &nums) {
    for (int i = 0; i < (nums.size() - 1); i++) {
      if (nums[i] == nums[i + 1]) {
        nums[i] *= 2;
        nums[i + 1] = 0;
      }
    }
    int keepZero = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        int temp = nums[keepZero];
        nums[keepZero] = nums[i];
        nums[i] = temp;
        keepZero++;
      }
    }
    return nums;
  }
};
