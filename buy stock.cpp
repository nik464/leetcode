#include <vector>
#include <iostream>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimum = INT_MAX;
        int maximum = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            minimum = min(minimum, prices[i]);
            maximum = max(maximum, prices[i] - minimum);
        }
        return maximum;
    }
};