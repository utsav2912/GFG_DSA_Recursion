# Rest of the code is already given

class Solution:
    def digitalRoot(self, n):
        while len(str(n)) > 1:
            digits = [int(i) for i in list(str(n))]
            n = sum(digits)
        return n
