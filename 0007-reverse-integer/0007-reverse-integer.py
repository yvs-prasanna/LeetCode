class Solution:
    def reverse(self, x: int) -> int:
        flag = True
        if(x < 0):
            flag = False
            x *= -1
        s = str(x)
        s = s[::-1]
        if(flag):
            if(int(s) > (2**31)):
                return 0
            else:
                return int(s)
        else:
            s = int(s)
            s *= -1
            if(s < -(2**(31))):
                return 0
            return s

        