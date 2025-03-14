"""
Add binary
By Duc
Mar 12, 2025
"""

"""
Input: a, b is a binary string
Output: a + b as a binary string
Constraints: 1 <= a.length, b.length <= 10^4
            a and b consist only of '0' and '1' characters
            Each string does not contain leading zeros except for the zero itself.
"""


def addBinary(a: str, b: str) -> str:
    # carry = 0
    # length_a = len(a) - 1
    # length_b = len(b) - 1
    # result = ""
    # while length_a >= 0 or length_b >= 0 or carry:
    #     digit_a = int(a[length_a]) if length_a >= 0 else 0
    #     digit_b = int(b[length_b]) if length_b >= 0 else 0
    #
    #     total = digit_a + digit_b + carry
    #     result = str(total % 2) + result
    #     carry = total // 2
    #     length_a -= 1
    #     length_b -= 1
    #
    # return result

    return bin(int(a, 2) + int(b, 2))[2:]


if __name__ == "__main__":
    print(addBinary("11", "1"))  # Output: "100"
    print(addBinary("1010", "1011"))  # Output: "10101"
    print(addBinary("1111", "1111"))  # Output: "11110"
    print(addBinary("1010", "1001"))  # Output: "11001"
    print(addBinary("1010", "0001"))  # Output: "1011"
    print(addBinary("1010", "1110"))  # Output: "10010"
