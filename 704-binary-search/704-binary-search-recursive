class Solution:            
    def search(self, nums: List[int], target: int) -> int:
        def binarySearch(nums: List[int], target: int, left: int, right: int) -> int:
            if left < right:
                mid = (left + right) // 2
                if nums[mid] == target:
                    return mid
                else:
                    if nums[mid] < target:
                        return binarySearch(nums, target, mid + 1, right)
                    else:
                        return binarySearch(nums, target, left, mid - 1)
            return -1
        left = 0
        right = len(nums) - 1
        return binarySearch(nums, target, left, right)
