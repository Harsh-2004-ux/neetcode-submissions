import heapq
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter=Counter(nums)

        min_heap=[]

        for num,freq in counter.items():

            heapq.heappush(min_heap,(freq,num))

            if(len(min_heap)>k):
                heapq.heappop(min_heap)

        ans=[]

        for freq,num in min_heap:
            ans.append(num)
        return ans