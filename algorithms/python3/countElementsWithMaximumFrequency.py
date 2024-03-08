class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        # Put frequencies into array
        freq = []
        dup = []
        for i, x in enumerate(nums):
            temp = 0
            for j, y in enumerate(nums):
                if (x == y and y not in dup):
                    temp += 1
            dup.append(x)
            freq.append(temp)

        # Add max frequencies
        count = max(freq)
        finalCount = 0
        if (count == 0):
            return len(nums)
        else:
            for i, x in enumerate(freq):
                if (count == x):
                    finalCount += count
            return finalCount
