class Solution:
    def nearestValidPoint(self, x: int, y: int, points: List[List[int]]) -> int:
        low, res = math.inf, -1
        for i in range(len(points)):
            if points[i][0] == x or points[i][1] == y:
                high = (abs(x - points[i][0]) + abs(y - points[i][1]))
                if high < low:
                    low = high
                    res = i
        return res