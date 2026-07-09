class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]==0)
        ++c;
        if(c==0)
        return;
        int x=0;
        for(int i=0;i<nums.size();i++)
        if(nums[i]!=0)
        nums[x++]=nums[i];
        for(int i=x;i<nums.size();i++)
        nums[i]=0;
    }
};