class Solution:
    def findLHS(self, nums: List[int]) -> int:
        nums.sort()
        maxi:int=0
        j:int=1
        i:int =0
        n = len(nums)
        while(i<n and j<n):
            while(j<n-1 and nums[j]==nums[j+1]):
                j+=1
            diff:int = nums[j]-nums[i]
            if(diff==1):
                maxi=max(j-i+1,maxi)
                i+=1
                j+=1
            elif diff==0:
                j+=1
            else:
                j+=1
                i+=1
        return maxi