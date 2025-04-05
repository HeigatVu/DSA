"""
Calculating sqrt
By Duc
Mar 14, 2025
"""

"""
Input: positive integer x
Output: the integer square root of x
Constraints: 0 <= x <= 10^31-1
"""
import math


def mySqrt(x):
    """
    :type x: int
    :rtype: int
    """
    # if x == 0 or x == 1:
    #     return x
    # sample = x
    # save_result = (sample + (x / sample)) / 2.0
    # while True:
    #     save_result = (sample + (x / (sample))) / 2.0
    #     if abs(save_result - sample) < 0.001:
    #         return int(math.floor(save_result))
    #     sample = save_result

    if x <= 1:
        return x
    left = 0
    right = x // 2
    result = 0
    while left <= right:
        mid = left + (right - left) // 2
        check_squared = mid * mid
        if check_squared <= x:
            result = mid
            left = mid + 1
        else:
            right = mid - 1

    return result


if __name__ == "__main__":
    # print(mySqrt(4))  # Output: 2
    print(mySqrt(8))  # Output: 2
    # print(mySqrt(16))  # Output: 4
    # print(mySqrt(25))  # Output: 5
    # print(mySqrt(100))  # Output: 10
