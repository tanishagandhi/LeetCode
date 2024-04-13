// APPROACH 1:OPTIMAL
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         int sum2=0;
//         for(int i=1;i<=n;i++){
//             sum+=i;
//         }
//         for(int i=0;i<n;i++){
//             sum2+=nums[i];
//         }
//         return sum-sum2;
//     }
// };

// APPROACH 2:MORE OPTIMAL
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor2=0;
        int xor1=0;
        for(int i=0;i<nums.size();i++){
            xor1=xor1^(i+1);
            xor2=xor2^nums[i];
        }
        return xor1^xor2;
    }
};