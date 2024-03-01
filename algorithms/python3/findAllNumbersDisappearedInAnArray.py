class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        resultArray = []
        arr = set(nums)
        for x in range(1, len(nums)):
            if x not in arr:
                resultArray.append(x)
        if (len(nums) not in arr):
            resultArray.append(len(nums))
        return resultArray
