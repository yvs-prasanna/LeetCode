class Solution:
    def longestPalindrome(self, s: str) -> str:
        if(len(s) == 1):
            return s
        if(len(s) == 2):
            if(s == s[::-1]):
                return s
        max_sub_str = ""
        for i in range(len(s)):
            for j in range(i+1, len(s)+1):
                sub_str = s[i:j]
                if(sub_str == sub_str[::-1]):
                    if(len(sub_str) > len(max_sub_str)):
                        max_sub_str = sub_str
        return max_sub_str



        