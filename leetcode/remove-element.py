"""
Remove element.
By Duc
Mar 5, 2025
"""

"""
Input: a list `nums` and an integer `val`.
Output: the length of the modified without `val` in list and k is the length of nums after removing element `val`.
Constraints: 0 <= nums.length <= 100
            0 <= nums[i] <= 50
            0 <= val <= 100
"""


def remove_element(nums, val):
    k = 0
    for i in range(0, len(nums), 1):
        if nums[i] == val:
            nums[i] = "_"
        else:
            k += 1
    print(nums)

    l = 0
    for r in range(0, len(nums), 1):
        if isinstance(nums[r], int):
            nums[l], nums[r] = nums[r], nums[l]
            l += 1

    return k, nums


if __name__ == "__main__":
    nums = [0, 1, 2, 2, 3, 4, 5, 5, 6, 7]
    val = 2
    print(remove_element(nums, val))
