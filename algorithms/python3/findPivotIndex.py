class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        left = 0
        right = 0
        for i, e in enumerate(nums):
            right += e

        for i, e in enumerate(nums):
            right -= e
            if (left == right):
                return i
            left += e
        return -1
