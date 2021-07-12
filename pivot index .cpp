
#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int lsum = 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            sum -= nums[i];
            if (sum = lsum)
            {
                return i;
            }
            lsum += nums[i];
        }
        return -1;
        }
    };