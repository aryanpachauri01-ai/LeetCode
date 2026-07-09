class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int size=0,maxsize=0;
        //if(nums[0]==1)
        //size++;
        if(nums.size()==1)
        return nums.back();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                size++;
                if(size>maxsize)
                maxsize=size;
            }
            else// if nums[i] is zero
            size=0;
        }
        return maxsize;
    }
};