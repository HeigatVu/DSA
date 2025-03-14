"""
Searching insert position in a ascending sorted array.
By Duc
Mar 6, 2025
"""

"""
Input: a ascending sorted array `nums` and a target integer `target`
Output: the index if the target is found. If not, return the index where it would be inserted in order.
Constraints: 1 <= nums.length <= 10^4
            -10^4 <= nums[i] <= 10^4
            `nums` is sorted in ascending order
            -10^4 <= target <= 10^4
"""


# # Too chicken
# def searchInsert(nums, target):
#     left, right = 0, (len(nums) - 1)
#
#     result = 0
#     while left <= right:
#         mid = left + (right - left) // 2
#         print("result:", result)
#         if nums[mid] == target:
#             return mid
#         elif nums[mid] < target:
#             left = mid + 1
#         else:
#             right = mid - 1
#
#     for i in range(0, len(nums), 1):
#         if nums[i] > target:
#             result = i
#             break
#         else:
#             result = len(nums)
#     return result


# Better version
def searchInsert(nums, target):
    for i, num in enumerate(nums):
        if num >= target:
            return i

    return len(nums)


if __name__ == "__main__":
    nums = [1, 3, 5, 6]
    target = 0
    print(searchInsert(nums, target))  # Output: 2
