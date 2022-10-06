class TimeMap {
public:
    unordered_map<string,set<int>>t;
    unordered_map<string,string>mp;
    
    string getV(string &s,int time){
        string ans=s;
        ans+=to_string(time);
        return ans;
    }
    TimeMap() {
        
    }
    
    void set(string key, string value, int time) {
        
        mp[getV(key,time)]=value;
        t[key].insert(time);
        
    }
    
    string get(string key, int time) {
        auto it=t[key].lower_bound(time);
        if(*it!=time){
            if(it==t[key].begin()){
                return "";
            }
            it--;
        }
        return mp[getV(key,*it)];
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */