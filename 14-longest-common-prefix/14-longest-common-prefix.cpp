class Solution {
public:
    struct Trie{
        unordered_map<char,Trie*> child;
        bool isword=false;
    }root;
    void insert(string word){
        auto cur=&root;
        for(char c : word){
            if(cur->child.find(c)==cur->child.end())
                cur->child[c]=new Trie();
            cur=cur->child[c];
        }
        cur->isword=true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size()==0) return "";
        
        for(auto word:strs)
            insert(word);
        
        auto cur=&root;
        string res="";
        
        while(cur&&!cur->isword&&(cur->child.size()==1)){
            auto it=cur->child.begin();
            res+=it->first;
            cur=it->second;
        }
        return res;
    }
};