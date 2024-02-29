class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        count = 0        
        compareArray = heights.copy()
        compareArray.sort()
        for x, e in enumerate(compareArray):
            if (e != heights[x]):
                count = count + 1
        return count
