class Solution {
public:
    int shortestSequence(vector<int>& rolls, int k) {
        int hash[100001]={0},level=0,cnt=0;
        for(auto&x:rolls){
            if(hash[x]==level){
                hash[x]++;
                if(++cnt%k==0){
                    level++;cnt=0;
                }
            }
        }
        return level+1;
    }
};