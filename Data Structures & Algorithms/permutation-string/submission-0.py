class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        a=sorted(s1);
        n=len(a)

        for i in range(len(s2)-n+1):
            b=sorted(s2[i:i+n])

            if(a==b):
                return True;
        return False