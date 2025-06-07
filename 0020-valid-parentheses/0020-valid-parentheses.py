class Solution:
    def isValid(self, s: str) -> bool:
        m = {"(" : ")", "{" : "}", "[" :"]"}
        stack = []
        for i in s:
            if i in m:
                stack.append(i)
            elif(len(stack) == 0):
                return False
            elif(m[stack[-1]] == i):
                stack = stack[:-1]
            else:
                return False
        if(len(stack) == 0):
            return True
        return False

        
        