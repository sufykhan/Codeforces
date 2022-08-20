



class Solution {
public:
    int find(int i, vector<long long>& ds) {
    return ds[i] < 0 ? i : ds[i] = find(ds[i], ds);
}
void merge(int s1, int s2, vector<long long>& ds) {
    int p1 = find(s1, ds), p2 = find(s2, ds);
    ds[p2] += ds[p1];
    ds[p1] = p2;
}
vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& rq) {
    vector<long long> res(nums.size()), ds(nums.size(), INT_MAX);
    for (int i = rq.size() - 1; i > 0; --i) {
        int j = rq[i];
        ds[j] = -nums[j];
        if (j > 0 && ds[j - 1] != INT_MAX)
            merge(j, j - 1, ds);
        if (j < nums.size() - 1 && ds[j + 1] != INT_MAX)
            merge(j, j + 1, ds);
        res[i - 1] = max(res[i], -ds[find(j, ds)]);
    }
    return res;
}
};