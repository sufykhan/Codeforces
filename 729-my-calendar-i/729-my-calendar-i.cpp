class MyCalendar {
public:
    vector<vector<int>>mp;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto x:mp){
            if(x[0]<end && start<x[1]) return false;
        }
        mp.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */