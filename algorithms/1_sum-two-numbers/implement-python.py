"""
Implement with python
By Duc
Feb 16, 2025
"""


def sum_of_digits(first_num, second_num):
    return first_num + second_num


if __name__ == "__main__":
    first_num, second_num = map(
        int, input("Enter two numbers separated by a space: ").split()
    )
    print(f"Sum of two digits {sum_of_digits(first_num, second_num)}")
