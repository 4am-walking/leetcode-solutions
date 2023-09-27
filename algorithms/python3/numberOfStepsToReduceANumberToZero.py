class Solution:
    def numberOfSteps(self, num: int) -> int:
        sumOfSteps = 0
        i = 0
        while (i < num):
            if (num % 2 == 0): 
                num = num / 2
                sumOfSteps += 1
            else: 
                num -= 1
                sumOfSteps += 1
        return sumOfSteps
