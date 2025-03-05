"""
Find the index of the first occurrence in a string
By Duc
Mar 5, 2025
"""

"""
Input: string a haystack and string a needle
Output: -1 for not found, idx of the first occurence if needle is found in haystack
Contrainst: 1 <= haystack.length, needle.length <= 10^4
            haystack and needle consist of only lowercase English characters. 
"""


def strStr(haystack, needle):
    needle_length = len(needle)

    for i in range(0, len(haystack) - len(needle), 1):
        if haystack[i : i + needle_length] == needle:
            return i
        else:
            return -1


if __name__ == "__main__":
    haystack = input("Enter the haystack: ")
    needle = input("Enter the needle: ")
    print(strStr(haystack, needle))
