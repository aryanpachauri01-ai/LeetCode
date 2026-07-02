#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector <int> arr(m+n);
        for(int i=0;i<m;i++)
        arr[i]=nums1[i];
        for(int i=0;i<n;i++)
        arr[m+i]=nums2[i];
        sort(arr.begin(),arr.end());
        if((m+n)%2==0)
        return (arr[(m+n)/2-1]+arr[(m+n)/2])/2.0;
        else 
        return arr[(m+n)/2];
    }
};