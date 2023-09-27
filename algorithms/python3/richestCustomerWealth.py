class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxWealth=0
        for x in range(len(accounts)):
            sum = 0
            for y in range(len(accounts[x])):
                sum += accounts[x][y]
            if (maxWealth<sum):
                maxWealth=sum
        return maxWealth
