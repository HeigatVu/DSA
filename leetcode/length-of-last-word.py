"""
Length of last word.
By Duc
Mar 10, 2025
"""

"""
Input: a string s
Output: the length of the last word in s
Constraints: 1 <= s.length <=10^4
             s only contains English letters and spaces ' '
            There will be at least one word in s
"""


# def lengthOfLastWord(s):
#     """
#     :type s: str
#     :rtype: int
#     """
#     bs = s.strip()
#     result = 0
#     for i in range(-1, -len(bs) - 1, -1):
#         if bs[i] != " ":
#             result += 1
#         else:
#             break
#     return result


def lengthOfLastWord(s):
    return len(s.strip().split()[-1])


if __name__ == "__main__":
    print(lengthOfLastWord("Hello World"))  # Output: 5
    print(lengthOfLastWord("a "))  # Output: 1
    print(lengthOfLastWord("a"))  # Output: 1
    print(lengthOfLastWord("   fly me   to   the moon  "))  # Output: 3
