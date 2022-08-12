class Solution {
public:
    int canCompleteCircuit(vector<int>& A, vector<int>& B) {
        vector<int>ans(A.size(),0);
        long long int tot=0;
        int pos=0;
        for(int i=0;i<A.size();i++){
            int val=(A[i]-B[i]);
            if(tot+val<0){
                tot=0;
                pos=i+1;
            }
            else{
                tot+=val;
            }
        }
        if(tot<0) return -1;
        for(int i=0;i<pos;i++){
            tot+=A[i]-B[i];
            if(tot<0){
                return -1;
            }
        }
        return pos;

    }
};