// APPROACH 1: BETTER
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         vector <int> hash(n+1,0);
//         for(int i=0;i<n;i++){
//             hash[nums[i]]++;
//         }
//         for(int i=0;i<hash.size();i++){
//             if(hash[i]==0){
//                 return i;
//             }
//         }
//         return 0;
//     }
// };

// APPROACH 2:OPTIMAL
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int sum2=0;
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        for(int i=0;i<n;i++){
            sum2+=nums[i];
        }
        return sum-sum2;
    }
};

// APPROACH 3:MORE OPTIMAL
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//     }
// };