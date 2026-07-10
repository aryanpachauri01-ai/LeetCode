class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int, int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector <int> v;
        for(int i=0;i<n;i++)
        if(mpp[nums[i]]>(n/3))
       {
        v.push_back(nums[i]);
        mpp[nums[i]]=0;
       }
        return v;
    }
};