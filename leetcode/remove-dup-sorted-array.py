"""
Remove duplicate from sorted array
By Duc
Mar 4, 2025
"""

"""
Input: A array `nums` contains ascending order integers.
Output: k the number of unique elements in the array and unique nums
Constraints: 1 <= nums.length <= 3*10^4 
            -100 <= nums[i] <= 100
            `nums` is sorted in ascending order
"""


def remove_duplicates(nums):
    flag_num = nums[0]
    k = 1
    for i in range(1, len(nums), 1):
        if nums[i] == flag_num:
            nums[i] = "_"
        else:
            flag_num = nums[i]
            k += 1

    l = 0
    for r in range(0, len(nums), 1):
        if nums[r] != "_":
            nums[l], nums[r] = nums[r], nums[l]
            l += 1

    return f"{k}, nums = {nums[:]}"


if __name__ == "__main__":
    n = int(input("Enter the size of the arry: "))
    nums = []
    for i in range(n):
        nums.append(int(input("Enter number: ")))
    print(remove_duplicates(nums))
