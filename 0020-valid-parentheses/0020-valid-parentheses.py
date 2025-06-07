class Solution:
    def isValid(self, s: str) -> bool:
        openings = ['(', "[", "{"]
        closings = [")", "]", "}"]
        stack = []
        for i in range(len(s)):
            if(s[i] in openings):
                stack.append(s[i])
            elif(len(stack) == 0):
                return False
            elif(openings.index(stack[-1]) == closings.index(s[i])):
                stack = stack[:-1]
            else:
                return False
        if(len(stack) == 0):
            return True
        return False
        
        