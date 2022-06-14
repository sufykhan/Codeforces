class TextEditor {

    stack<char> left;
    stack<char> right;
public:
    
    //13min left --> In text Editors generally two stacks are used
    
    TextEditor() {
        
    }
    void addText(string text) {
        for(auto &c : text){
            left.push(c);
        }
    }
    
    int deleteText(int k) {
        int cnt=0;
        while(!left.empty() and k>0){
            left.pop();
            cnt++;
            k--;
        }
        return cnt;
    }
    
    string cursorLeft(int k) {
        while(!left.empty() and k>0){
            char c = left.top();left.pop();
            right.push(c);
            k--;
        }
		// returning the last min(10, len) characters to the left of the cursor
        return cursorShiftString();
    }
    
    string cursorRight(int k) {
        while(!right.empty() and k>0){
            char c = right.top();right.pop();
            left.push(c);
            k--;
        }
		// returning the last min(10, len) characters to the left of the cursor
        return cursorShiftString();
    }
    
	// function to return the last min(10, len) characters to the left of the cursor
    string cursorShiftString(){
        string rtn = "";
        int cnt=10;
        while(!left.empty() and cnt>0){
            char c = left.top();left.pop();
            rtn += c;
            cnt--;
        }
        reverse(rtn.begin(),rtn.end());
        for(int i=0;i<rtn.size();i++){
            left.push(rtn[i]);
        }
        return rtn;
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */
//[null, null, 4, null, "etpractice", "leet", 4, "", "practi"]