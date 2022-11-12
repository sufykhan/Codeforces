class MedianFinder {
public:
    
    //Create the Binary Search Tree then do iterative inorder to find the kth largest element;
    priority_queue<int>q1;
    priority_queue<int>q2;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        q1.push(num);
        q2.push(-q1.top());
        q1.pop();
        if(q1.size()<q2.size()){
            q1.push(-q2.top());
            q2.pop();
        }
    }
    
    double findMedian() {
        double ans;
        if(q1.size()==q2.size()){
            ans=(q1.top()-q2.top())/2.0;
        }
        else{
            ans=q1.top();
        }
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */