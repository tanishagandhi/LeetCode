class Solution {
public:
    int lowerbound(vector<int>& nums, int target){
        int n=nums.size();
        int low=0,high=n-1;
        int lowerbound=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else{
                lowerbound=mid;
                high=mid-1;
            }
        }
        return lowerbound;
    }
    int upperbound(vector<int>& nums, int target){
        int n=nums.size();
        int low=0,high=n-1;
        int upperbound=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                upperbound=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return upperbound;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int l=lowerbound(nums, target);
        if(l==n || nums[l]!=target) return {-1,-1};
        else return {l,(upperbound(nums, target)-1)};
    }
};