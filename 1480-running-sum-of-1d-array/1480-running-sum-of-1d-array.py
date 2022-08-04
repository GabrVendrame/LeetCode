class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum = []
        aux = 0
        for i in range (len(nums)):
            aux = aux + nums[i]
            sum.append(aux)
        return sum