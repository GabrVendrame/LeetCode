class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left = 0
        right = sum(nums)
        for i, number in enumerate(nums):
            right = right - number
            if left == right:
                return i
            left = left + number
        return -1
        