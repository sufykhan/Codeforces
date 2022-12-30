/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &b) {
        auto dim=b.dimensions();
        int row=dim[0],col=dim[1];
        
        int curr=col;
        for(int i=0;i<row;i++){
            
            int l=0,r=curr-1;
            
            while(r>=l){
                int mid=l+(r-l)/2;
                if(b.get(i,mid)==1){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            
            if(l!=curr){
                curr=l;
            }

        }
        
        if(curr==col) return -1;
        else return curr;
        
    }
};