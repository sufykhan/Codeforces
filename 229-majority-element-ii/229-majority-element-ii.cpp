class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int nums1,nums2,cnt1=0,cnt2=0;
        for(auto &x:nums){
            if(x==nums1) cnt1++;
            else if(x==nums2) cnt2++;
            else if(cnt1==0) nums1=x,cnt1=1;
            else if (cnt2==0) nums2=x,cnt2=1;
            else cnt1--,cnt2--;
        }
        cnt1=0,cnt2=0;
        for(auto &x:nums){
            if(x==nums1) cnt1++;
            if(x==nums2) cnt2++;
        }
        cout<<nums1<<" "<<nums2<<"\n";
        int n=nums.size();
        if(cnt1>(n/3)) ans.push_back(nums1);
        if(cnt2>(n/3) && nums1!=nums2) ans.push_back(nums2);
        return ans;
    }
};