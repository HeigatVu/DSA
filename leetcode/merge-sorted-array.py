"""
Input: ascending integer arrays nums1 and nums2
        m and n represent the number of elements in nums1 and nums2 respectively
Output: nums1 and nums2 were merged together with ascending sorted arrays
Constraints: nums1.length == m+n
            nums2.length == n
            0 <= m, n <= 200
            1 <= m + n <= 200
            -10^9 <= nums1[i], nums2[i] <= 10^9
"""


def merge_sorted_arrays(nums1, m, nums2, n):
    pointer = 0
    for i in range(len(nums1)):
        if nums1[i] == 0:
            nums1[i] = nums2[pointer]
            pointer += 1
    right_pt = 0
    for left_pt in range(0, m, 1):
        if nums1[left_pt] > nums1[right_pt]:
            nums1[left_pt], nums1[right_pt] = nums1[right_pt], nums1[left_pt]
            print(nums1)
        if nums1[left_pt] == nums2[right_pt]:
            right_pt += 1
    return nums1


if __name__ == "__main__":
    nums1 = [1, 2, 3, 0, 0, 0]
    m = 3
    nums2 = [2, 5, 6]
    n = 3
    print(merge_sorted_arrays(nums1, m, nums2, n))  # Output: [1, 2, 2, 3, 5, 6]
