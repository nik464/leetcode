#include<vector>
#include<iostream>
#include <unordered_map>
using namespace std;


class solution
{

    vector<int> twoSum(vector<int> &nums, int t)
    {   unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int x = nums[i];
            int y = t - x;
            if (m.find(y) != m.end())
            {
                return {i, m[y]};
            }
            m[nums[i]] = i;
        }
        return {-1, -1};
    }
};
