#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


class solution{
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    for(int i=m,j=0;i<m+n &&j<n;j++)
    {
        nums1[i]=nums2[j];
    }
    
    sort(nums1.begin(), nums1.end());
    
    }
    
};