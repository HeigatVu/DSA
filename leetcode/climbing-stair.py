"""
Climbing stairs
By Duc
Mar 16, 2025
"""

"""
Input: n steps to reach the top
Output: the distinct ways can you climb to the top?
Constraints: 1 <= n <= 45
"""


def climbStairs(n: int) -> int:
    result = 1
    if n <= 1:
        return 1

    num_two_steps = n // 2
    for i in range(1, num_two_steps + 1):
        result += (n - i * 2) + 1

    return result


if __name__ == "__main__":
    n = int(input("Enter the number of steps: "))
    print(f"The distinct ways to climb {n} steps is: {climbStairs(n)}")
