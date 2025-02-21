"""
Implement in python
By Duc
Feb 18, 2025
"""


def max_pair_product_naive(numbers):
    max_product = 0
    for first in range(len(numbers)):
        for second in range(first + 1, len(numbers)):
            max_product = max(max_product, numbers[first] * numbers[second])

    return max_product


if __name__ == "__main__":
    n = int(input("Enter the size of the array: "))
    numbers = list(
        map(int, input("Enter the array elements separated by space: ").split())
    )

    print("The maximum pairwise product is: ", max_pair_product_naive(numbers))
