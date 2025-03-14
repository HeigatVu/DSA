"""
Plus one
By Duc
Mar 10, 2025
"""

"""
Input: a list of integers `digits` ordering from the most significant digit to the least significant digits.
Output: Increment the number represented by `digits` by 1.
Contrainst: 1 <= digits.length <= 100
            0 <= digits[i] <= 9
            digits does not contain any leading zeros.
"""


def plusOne(digits):
    # for i in range(len(digits) - 1, -1, -1):
    #     if digits[i] == 9:
    #         if i == 0:
    #             digits[i] = 0
    #             digits.insert(0, 1)
    #             break
    #         else:
    #             digits[i] = 0
    #     else:
    #         digits[i] += 1
    #         break
    # return digits

    for i in range(len(digits) - 1, -1, -1):
        if digits[i] < 9:
            digits[i] += 1
            return digits
        else:
            digits[i] = 0
    return [1] + digits


if __name__ == "__main__":
    digits = [8, 8]
    print(plusOne(digits))
