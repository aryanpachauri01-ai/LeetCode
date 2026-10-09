class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1,1);
        for(int i=1;i<rowIndex+1;i++)
        {
            long long val=ans[i-1];
            val=val*(rowIndex-i+1)/i;
           ans[i]=val;
        }
        return ans;
    }
};