class Solution {
public:
    int maxSumAfterOperation(vector<int>& nums) {
        int sum_uptil_prev = 0, maxi = 0, ans = 0;
        for (auto &x : nums) {
            maxi = max(maxi + x, sum_uptil_prev + x * x);
            sum_uptil_prev = max(0, x + sum_uptil_prev);
            ans = max(ans, maxi);
        }
        return ans;
    }
};