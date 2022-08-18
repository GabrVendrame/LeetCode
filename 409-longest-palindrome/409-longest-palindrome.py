class Solution:
    def longestPalindrome(self, s: str) -> int:
        result = sum([(char // 2) * 2 for char in Counter(s).values()])
        if result != len(s):
            return result + 1
        return result