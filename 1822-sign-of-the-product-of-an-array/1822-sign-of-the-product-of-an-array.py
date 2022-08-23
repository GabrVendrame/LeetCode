class Solution:
    def arraySign(self, nums: List[int]) -> int:
        product = 1
        for number in nums:
            if number == 0:
                return 0
            elif number < 0:
                product *= -1
        return product