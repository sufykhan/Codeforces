class Solution {
public:
    int minimumLines(vector<vector<int>>&nums) {
        
        int cnt=0; 
        sort(nums.begin(),nums.end());
        
        long double m;
        long double c;
        for(int i=1;i<nums.size();i++){
            
            
            m=(double)(nums[i][1]-nums[i-1][1])/(nums[i][0]-nums[i-1][0]);
            c=nums[i][1]-m*nums[i][0];
            //cout<<m<<" "<<c<<" ";
            int j=i+1;
            while(j<nums.size() && abs(m*nums[j][0]+c-nums[j][1])<1e-9){
                j++;
            }
            i=j-1;
            cnt++;
        }
        return cnt;
    }
};