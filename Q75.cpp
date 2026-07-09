class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a,b,c;
        a=b=c=0;
        for(int itt:nums)
        {
            if(itt==0)
            ++a;
            else if(itt==1)
            ++b;
            else
            ++c;
        }
        b+=a;
        c+=b;
        for(int i=0;i<a;i++)
        nums[i]=0;
        for(int i=a;i<b;i++)
        nums[i]=1;
        for(int i=b;i<c;i++)
        nums[i]=2;
    }
};