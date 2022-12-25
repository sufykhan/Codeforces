class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        long long tot=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
            s.insert(tot);
        }
        vector<int>ans;
        for(auto &x:queries){
            auto it=s.lower_bound(x);
            
            if(it==s.begin() && *it!=x){
                ans.push_back(0);
                continue;
            }
            if(*it!=x){
                --it;
            }
            ans.push_back(distance(s.begin(),it)+1);
        }
        return ans;
    }
};