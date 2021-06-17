#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numSubarrayBoundedMax(vector<int> &nums, int left, int right)
    {
        int n = nums.size(), ans = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {

            v[0] = nums[i];

            if (v[0] >= left && v[0] <= right)
                ans++;
            if (v[0] > right)
            {
                continue;
            }
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] >= v[j - 1 - i])
                {
                    v[j - i] = nums[j];
                }
                else
                {
                    v[j - i] = v[j - i - 1];
                }

                if (v[j - i] >= left && v[j - i] <= right)
                {
                    ans++;
                }
                if (v[j - i] > right)
                {
                    break;
                }
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution s;
    vector<string> v{"3", "11", "5", "+", "-"};
    return 0;
}
