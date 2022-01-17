#include "bits/stdc++.h"
using namespace std;

struct Node{
  int data;
  struct Node* next;
  
  Node(int x){
      data=x;
      next=nullptr;
  }
  
};
class Solution {
public:
    vector<int> factorial(int N){
        
        Node* start=new Node(1);
        Node* ans=start;
       
        for(int i=2;i<=N;i++){
            Node* curr=start;
            int carry=0;
            while(curr!=nullptr){
                
                int val=(curr->data)*i;
                
                if(val+carry>9){
                     curr->data=(val+carry)%10;
                     carry=(val+carry)/10;
                }
                else{
                    curr->data=val+carry;
                    carry=0;
                }
                if(curr->next==nullptr) break;
                curr=curr->next;
            }
            while(carry!=0){
                curr->next=new Node(carry%10);
                carry=carry/10;
                curr=curr->next;
            }
        }
        
       vector<int>v;
      while(ans!=nullptr){
         
          v.insert(v.begin(),ans->data);
          ans=ans->next;
      }
       return v;
    }
};

int main(){
    Solution s;
    vector<int>v=s.factorial(5);
    for(auto x:v){
        cout<<x;
    }
    cout<<endl;
    return 0;
}