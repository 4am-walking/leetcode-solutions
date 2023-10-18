class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        if (arr == None or len(arr) == 0):
            return False
        for i in range(len(arr)):
            for j in range(len(arr)):
                if (i != j and arr[i] == 2 * arr[j] and 0 <= i and j < len(arr)):
                    return True
        return False
