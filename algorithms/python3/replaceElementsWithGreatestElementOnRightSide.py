class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        temp = arr[len(arr) - 1]
        arr[len(arr) - 1] = -1
        for i in range(len(arr) - 2, -1, -1):
            current = arr[i]
            arr[i] = temp
            if (current > temp):
                temp = current
        return arr
