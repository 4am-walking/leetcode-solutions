class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        sum = 0
        for x in range(len(nums)):
            sum += nums[x]
            nums[x] = sum
        return nums
