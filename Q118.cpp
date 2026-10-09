class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0]={1};
        for(int i=1;i<=numRows-1;i++)
        {
            vector<int> row(i+1,1);
            {
                long long val;
                for(int j=1;j<=i;j++)
                {
                    val=row[j-1]*(i-j+1)/j;
                    row[j]=val;
                }
            }
            ans[i]=row;
        }
        return ans;
    }
};