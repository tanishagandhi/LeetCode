class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,maxlen=INT_MIN,zeros=0;
        int n=nums.size();
        while(r<n){
            if(nums[r]==0) zeros++;
            if(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};