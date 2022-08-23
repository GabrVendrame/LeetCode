class Solution:
    def canMakeArithmeticProgression(self, arr: List[int]) -> bool:
        ans = True
        try:
            arr.sort()
            for i in range(1, len(arr)-1):
                if arr[i-1] - arr[i] != arr[i] - arr[i+1]:
                    ans = False
        except:
            arr.sort(reverse=True)
            for i in range(1, len(arr)-1):
                if arr[i-1] - arr[i] != arr[i] - arr[i+1]:
                    ans = False
        return ans
            