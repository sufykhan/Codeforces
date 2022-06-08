class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int,int>ans;
        for(int i=0;i<nums2.size();i++){
            if(s.empty()){
                s.push(i);
                continue;
            }
            while(!s.empty()&&nums2[i]>nums2[s.top()]){
                ans[nums2[s.top()]]=nums2[i];
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ans[nums2[s.top()]]=-1;
            s.pop();
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=ans[nums1[i]];
        }
        return nums1;
    }
};