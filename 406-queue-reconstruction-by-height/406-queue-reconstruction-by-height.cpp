class Solution {
public:
    static bool comp(vector<int> &a, vector<int> &b) {
        return (a[0] == b[0]) ? (a[1] < b[1]) : (a[0] > b[0]);
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& a) {
        sort(a.begin(), a.end(), comp);
        vector<vector<int>> ans;
        for(int i = 0 ; i < a.size(); i++) {
            ans.insert(ans.begin() + a[i][1], a[i]);
        }
        return ans;
    }
    
};