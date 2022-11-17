class Solution {
public:
    long long int area(int x1,int y1,int x2,int y2){
        long long int ans= abs(x1-x2)*1LL*abs(y1-y2);
        return ans;
    }
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int delx= max(0,min(ax2,bx2)-max(ax1,bx1));
        int dely= max(0,min(ay2,by2)-max(ay1,by1));
        long long int inter=delx*1LL*dely;
        
        long long ans=area(ax1,ay1,ax2,ay2)+area(bx1,by1,bx2,by2)-inter;
        
        return ans;
    }
};