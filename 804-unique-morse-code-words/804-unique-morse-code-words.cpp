class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       string arr[26]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string>s;
        for(auto &x:words){
            string val="";
            for(auto &y:x){
                val+=arr[y-'a'];
            }
            s.insert(val);
        }
        return s.size();
    }
};