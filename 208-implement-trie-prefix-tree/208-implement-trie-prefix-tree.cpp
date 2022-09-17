struct Node{
  
    Node* arr[26];
    bool flg;
    
    void create(char x,Node* root){
        arr[x-'a']=root;
    }
    
    Node* get(char x){
        return arr[x-'a'];
    }
    
    bool find(char x){
        return arr[x-'a']!=nullptr;
    }
    
};

class Trie {
    Node* ans;
public:
    Trie() {
        ans=new Node();    
    }
    
    void insert(string word) {
        Node* root=ans;
        for(auto x:word){
            if(!root->find(x)){
                root->create(x,new Node());
            }
            root=root->get(x);
        }
        root->flg=true;
    }
    
    bool search(string word) {
        Node* root=ans;
        for(auto x:word){
            if(!root->find(x)){
                return false;
            }
            root=root->get(x);
        }
        return root->flg;
    }
    
    bool startsWith(string prefix) {
        Node* root=ans;
        for(auto x:prefix){
            if(!root->find(x)){
                return false;
            }
            root=root->get(x);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */