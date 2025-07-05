from collections import defaultdict
class Solution:
    def findLucky(self, arr: List[int]) -> int:
        freq = defaultdict(int)
        for i in arr:
            freq[i]+=1
        maxi = -1
        for key , value in freq.items():
            if key==value:
                maxi=max(maxi,key)
        return maxi

        