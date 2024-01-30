class Solution {
    public int removeDuplicates(int[] nums) {
        int index=0;
        int pre=nums[0];
        while(index==0){
            nums[index]=pre;
            index=index+1;
        }
        for(int i=1;i<nums.length;i++)
        {
            if(pre!=nums[i])
            {
                nums[index++]=nums[i];
                pre=nums[i];
            }
        }
        return index;
    }
}
