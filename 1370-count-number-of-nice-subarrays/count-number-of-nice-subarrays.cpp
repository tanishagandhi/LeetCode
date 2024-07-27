class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        if (k < 0) return 0;
        return atMost(nums, k) - atMost(nums, k - 1);
    }
    int atMost(vector<int>& nums, int k) {
        if(k<0) return 0;
        int l=0,r=0,cnt=0,sum=0;
        while(r<nums.size()){
            sum+=nums[r]%2;
            while(sum>k){
                sum=sum-nums[l]%2;
                l=l+1;
            }
            cnt=cnt+(r-l+1);
            r++;
        }
        return cnt;
    }
};