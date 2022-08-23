class Solution:
    def countOdds(self, low: int, high: int) -> int:
        size = (high - low) + 1
        if low % 2 != 0 and high % 2 != 0:
            return math.ceil(size / 2)
        elif low % 2 == 0 or high % 2 == 0:
            return size // 2
        else:
            return math.floor(size / 2)