class Solution:
    def isPalindrome(self, x: int) -> bool:
        arr = str(x)
        arr2 = arr[::-1]

        for i,e in enumerate(arr):
            if (e != arr2[i]):
                return False
        return True
