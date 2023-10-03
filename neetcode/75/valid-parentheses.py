class Solution:
    def isValid(self, s: str) -> bool:
        stack = []

        for i in s:
            stack.append(i)
        
        

        return True

x = Solution()
s = "()[]{}"
print(x.isValid(s))