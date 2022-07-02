class Solution {
public:
    int mod=1e9+7;
    int maxArea(int hh, int ww, vector<int>& h, vector<int>&v) {
        sort(h.begin(), h.end());
        sort(v.begin(), v.end());
        
        
        // Horizontal
        vector<int> heights = {h[0]};
        int nh = h.size();
        for (int i=1; i<nh; i++) {
            heights.push_back(h[i]-h[i-1]);
        }
        heights.push_back(hh-h[nh-1]);
        
        // Vertical
        vector<int> lengths = {v[0]};
        int nv = v.size();
        for (int i=1; i<nv; i++) {
            lengths.push_back(v[i]-v[i-1]);
        }
        lengths.push_back(ww-v[nv-1]);
        
        // Take max
        long long int a = *max_element(heights.begin(), heights.end());
        long long int b = *max_element(lengths.begin(), lengths.end());
        
        // Multiply and return
        return (int)(a%mod*b%mod);
    }
};