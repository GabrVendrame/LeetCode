class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product = 1
        n = str(n)
        n = [int(n[i]) for i in range(len(n))]
        for elem in n:
            product *= elem 
        return (product - sum(n))