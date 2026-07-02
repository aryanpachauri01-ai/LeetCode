#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> hash;
        for(int i=0;i<nums.size();i++)
        hash[nums[i]]=i;
        for(auto it=nums.begin();it<nums.end();it++)
        {
           // int a=*it;
           // int b=target-*it;
            
            if(hash.find(target-*it)!=hash.end()&&static_cast <int> (it-nums.begin())!=hash[target-*it])
            return{static_cast <int> (it-nums.begin()),hash[target-*it]};
            
        }
        return {};
    }
};