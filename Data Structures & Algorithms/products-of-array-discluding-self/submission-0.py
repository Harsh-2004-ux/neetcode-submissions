class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        prod=1
        prod_without=1
        cnt=0
        for ele in nums:
            prod=prod*ele
            if(ele!=0):
                prod_without*=ele
            if(ele==0):
                cnt+=1
        
        arr=[]

        for ele in nums:

            if(ele!=0):
                if(cnt>1):
                    arr.append(0)
                else:
                    arr.append(prod//ele)
            else:
                if(cnt>1):
                    arr.append(0)
                else:
                    arr.append(prod_without)

        return arr