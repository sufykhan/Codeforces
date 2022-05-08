class Solution {
public:
    string largestGoodInteger(string nums) {
        map<int,int>mp;
        int ans=-1;
        nums+='$';
        for(int i=0;i<nums.size();i++){
            if(i<3){
                mp[nums[i]-'0']++;
            }
            else{
                for(auto x:mp){
                    if(x.second==3){
                        ans=max(ans,(int)x.first);
                    }
                }
                mp[nums[i]-'0']++;
                mp[nums[i-3]-'0']--;
            }
        }
        
        string val="";
        if(ans==-1) return val;
        val+=to_string(ans);
        val+=to_string(ans);
        val+=to_string(ans);
        return val;
    }
};