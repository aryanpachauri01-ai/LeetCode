class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;
        
         int x=1;//from this index sorting will start
            for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            nums[x++]=(nums[i]);

        }
        
        return x;
        
    }
};