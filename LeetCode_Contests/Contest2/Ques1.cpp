class Solution {
public:
    //1hrs 12min left
    int minMaxGame(vector<int>& nums) {
        int size=nums.size();
        while(size!=1){
            int maxi;
            int mini;
            for(int i=0;i<size/2;i++){
                
                if(i%2==0){
                    mini=min(nums[2*i],nums[2*i+1]);
                    nums[i]=mini;
                }
                else{
                    maxi=max(nums[2*i],nums[2*i+1]);
                    nums[i]=maxi;
                }
                cout<<nums[i]<<" ";

            }
            cout<<"\n";
            size=size/2;
        }
        return nums[0];
    }
};