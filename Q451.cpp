class Solution {
public:
    string frequencySort(string s) {
        vector <pair<int,char>> v;//we store frequency in int and character in char then sort vector for frequency
        unordered_map <char, int> mpp;
        for(int i=0;i<s.size();i++)
        mpp[s[i]]++;
        for(auto itt:mpp)
        v.push_back({itt.second,itt.first});
        sort(v.begin(), v.end(), greater<pair<int, char>>());
        s="";
        for(auto itt:v)
        s+=string(itt.first,itt.second);
        return s;
    }
};