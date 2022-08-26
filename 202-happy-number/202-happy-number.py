class Solution:
    def isHappy(self, n: int) -> bool:
        res = set()
        pow_n = 0
        while pow_n != 1:
            pow_n = 0
            while n > 0:
                pow_n += pow((n % 10), 2)
                n = n // 10
            if pow_n in res:
                return False
            else:
                n = pow_n
                res.add(n)
        return True