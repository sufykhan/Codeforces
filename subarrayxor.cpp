//Given an array of integers A and an integer B.
//Find the total number of subarrays having bitwise XOR of all elements equals to B.


// Time Complexity -> O(nlogn) , Space Complexity -> O(n)

int Solution::solve(vector<int> &A, int B) {

        int n=A.size();
        double cnt=0;
        vector<long long>pref(A.size()+1,0);

        map<long long,long long>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]^A[i];
            mp[pref[i+1]]++;
        }
 
        for(auto x:mp){
            int comp=(x.first)^B;
            if(comp==x.first){
                cnt+=((x.second)*(x.second-1))/2;
            }
            else{
                if(mp.find(comp)!=mp.end()){
                    cnt+=double ((x.second)*(mp[comp]))/2;
                }
            }
        }
        int ans=cnt;
        return ans;
}
