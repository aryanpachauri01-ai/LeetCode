#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        for(int i=1;i<=n;i++)
        s+=to_string(i);
        
        vector <string> vec ;
        do {
        vec.push_back(s);
        
    } while(next_permutation(s.begin(), s.end()));
    return vec[k-1];
    }
};