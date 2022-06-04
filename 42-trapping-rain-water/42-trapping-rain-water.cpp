class Solution {
public:
    int value(vector<int>& height){
        int great=height[0];
        int ans=0,cnt=0,sum=0;
        for(auto x:height){
           if(great>=x){
               cnt++;
               ans-=x;
               sum+=x;
           }
           else{
               ans+=cnt*great;
               cnt=0;
               sum=0;
               great=x;
           }
        }
        if(cnt!=0) ans+=sum;
        return ans;
    }
    int trap(vector<int>& height) {
        int ans=0;
        ans+=value(height);
        reverse(height.begin(),height.end());
        ans+=value(height);
        
        int maxi=*max_element(height.begin(),height.end());
      
        int pos1=-1,pos2=-1;
        for(int i=0;i<height.size();i++){
            if(maxi==height[i]){
                if(pos1==-1) pos1=i;
                pos2=i;
            }
        
        }
       // cout<<pos1<<" "<<pos2<<" ";
        for(int i=pos1;i<=pos2;i++){
            ans+=maxi-height[i];
        }
        return ans;
    }
};