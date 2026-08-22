class Solution:
    def fib(self, n: int) -> int:

        if n == 0:
            return 0

        prev2 = 0
        prev1 = 1

        for i in range(1, n):

            curr = prev1 + prev2

            prev2 = prev1
            prev1 = curr

        return prev1