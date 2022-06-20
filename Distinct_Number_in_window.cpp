vector<int> Solution::dNums(vector<int> &nums, int k) {
    
    map<int,int>mp;
    vector<int>ans;
    for(int i=1;i<=nums.size();i++){
            if(i<k){
                 mp[nums[i-1]]++;
            }
            else if(i==k){
                mp[nums[i-1]]++;
                ans.push_back(mp.size());
            }
            if(i>k){
                int val=(--mp[nums[i-k-1]]);
                mp[nums[i-1]]++;
                if(val<=0){
                    if(mp[nums[i-1]]!=1) ans.push_back(ans.back()-1);
                    else ans.push_back(ans.back());
                }
                else{
                    if(mp[nums[i-1]]!=1) ans.push_back(ans.back());
                    else ans.push_back(ans.back()+1);
                }
            }
            
    }
    return ans;
}
