class CountIntervals {
    set<pair<int, int>> st;
    int cnt;
    public:
    
    CountIntervals() {
        cnt = 0;
    }
    
    void add(int left, int right) {
        auto it = st.upper_bound({left, INT_MIN}); //An iterator to the the first element in the container which is considered to go after val, or set::end if no elements are considered to go after val.

        
        if(it != st.begin() && (--it)->second < left) {
            ++it;
        }
        
        while(it != st.end() && it->first <= right) {
            left = min(left, it->first);
            right = max(right, it->second);
            
            cnt -= (it->second - it->first + 1);
            it = st.erase(it);  //return an iterator to the element that follows the last element removed
        }
        
        st.insert({ left, right });
        cnt += (right - left + 1);
    }
    
    int count() {
        return cnt;
    }
};

/**
 * Your CountIntervals object will be instantiated and called as such:
 * CountIntervals* obj = new CountIntervals();
 * obj->add(left,right);
 * int param_2 = obj->count();
 */