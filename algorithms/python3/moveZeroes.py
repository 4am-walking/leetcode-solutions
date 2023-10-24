class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        writePointer = 0
        for readPointer in range(len(nums)):
            if (readPointer == len(nums) or nums[readPointer] != 0):
                nums[writePointer] = nums[readPointer]
                if (readPointer != writePointer):
                    nums[readPointer] = 0
                writePointer += 1
