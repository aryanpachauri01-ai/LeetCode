class Solution {
public:
    string reverseWords(string s) {
        vector <string> v;
        string w="";
        s=s+' ';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            w+=s[i];
            else if(!w.empty())
            {
                v.push_back(w);
                w="";
            }
        }
        w="";
        for(auto itt:v)
        w=itt+' '+w;
        w.pop_back();
        return w;
    }
};