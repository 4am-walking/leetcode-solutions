class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        countDigits = 0
        countFinal = 0
        for i in range(len(nums)):
            countDigits = 0
            while (nums[i] != 0):
                nums[i] = nums[i] // 10
                countDigits += 1
            if (countDigits % 2 == 0):
                countFinal += 1
        return countFinal
