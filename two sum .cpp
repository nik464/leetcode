#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public:
    vector<int> twoSums(vector<int>nums, int target)
    {
         int s=nums.size();
         int sum=0;
         for(int i=0;i<s;i++)
         {
             for(int j=i+1;j<s;j++)
              {   sum=nums[i]+nums[j];
                  if(sum==target)
                  {
                      return {i,j};
                  }
              }
         }
         return {};
    }
};