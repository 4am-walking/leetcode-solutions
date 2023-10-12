class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        resultArray = sorted(num * num for num in nums)
        return resultArray
