class Trie {
public:
    vector<string>v;
    Trie() {
        vector<string>v={};
    }
    
    void insert(string word) {
        if(!search(word)) v.push_back(word);
    }
    
    bool search(string word) {
        for(auto &x:v){
            if(x==word){
                return true;
            }
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        for(auto &x:v){
            string s=x.substr(0,prefix.size());
            if(s==prefix){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */