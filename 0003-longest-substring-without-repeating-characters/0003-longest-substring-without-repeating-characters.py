class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max = ""
        a = ""
        if len(s) == 1:
            return 1
        else:

            for i in range(len(s)):
                for j in range(i,len(s)):
                    if s[j] not in a:
                        a += s[j]
                    else:
                        if(len(a) >= len(max)):
                            max = a 
                        a = ""
                        break
                    
            return len(max) 
        