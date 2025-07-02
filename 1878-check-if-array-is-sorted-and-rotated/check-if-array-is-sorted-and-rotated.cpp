class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (nums[i]>nums[(i+1)%n])  cnt++;
        }
        return cnt<=1;
        // This line returns true if the count of inversions (cnt) is 
        // less than or equal to 1, indicating that the vector is 
        // almost sorted (at most one inversion is allowed). Otherwise, 
        // it returns false.
    }
};