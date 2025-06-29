class Solution {
public:
    const int mod = 1e9 + 7;
    long long shifting(long long num,long long x){
        if(x==0) return 1;
        if(x==1) return num;
        long long half = shifting((num*num)%mod,x/2)%mod;
        if(x%2==0){
            return half;
        }else{
            return (num * half)%mod;
        }
    }
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        long long count=0;
        sort(nums.begin(),nums.end());
        for(int left=0;left<n;left++){
            int low = left;
            int high=n-1;
            int index=-1;
            while(low<=high){
                int mid=low + (high-low)/2;
                if(nums[left]+nums[mid]<=target){
                    index=mid;
                    low = mid+1;
                }else{
                    high=mid-1;
                }
            }
            if(index!=-1){
                count = (count +shifting(2,index-left))%mod;
            }
        }
        return count;
    }
};