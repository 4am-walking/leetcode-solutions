class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)):
            return False
        
        s = ''.join(sorted(s))
        t = ''.join(sorted(t))
        
        for i, e in enumerate(s):
            if (e != t[i]):
                return False
        return True
