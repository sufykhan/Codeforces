class MyHashSet {
public:
    unordered_set<int>s;
    MyHashSet() {
        
    }
    
    void add(int key) {
        s.insert(key);
    }
    
    void remove(int key) {
        if(s.find(key)!=s.end())
            s.erase(s.find(key));
    }
    
    bool contains(int key) {
        if(s.find(key)!=s.end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */