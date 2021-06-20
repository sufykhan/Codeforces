#include <iostream>
#include <vector>
using namespace std;

class  MyCircularQueue
{

public:
    int N;
    int *arr;
    int tail, head;

public:
     MyCircularQueue(int k) {
        arr=new int[k];
        N=k;
        tail=-1;head=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if(head==-1 && tail==-1){
            head=tail=0;
            arr[tail]=value;
            return true;
        }
        if(tail==N-1 && head!=0){
            tail=0;
            arr[tail]=value;
            return true;
        }
        else{
            tail++;
            arr[tail%N]=value;
            return true;
        }
      
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if (head == tail)
    {
        head = -1;
        tail = -1;
        return true;
    }
        if(head==N-1){
            head=0;
            return true;
        }
        else{
            head++;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[head%N];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return arr[tail%N];
    }
    
    bool isEmpty() {
        if(head==-1){
           
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(head==0 && tail==N-1 || (head-tail)==1){
            return true;
        }
        return false;
    } 
};

int main()
{
MyCircularQueue myCircularQueue(3);
cout<<myCircularQueue.enQueue(1)<<endl; // return True
cout<<myCircularQueue.enQueue(2)<<endl; // return True
cout<<myCircularQueue.enQueue(3)<<endl; // return True
cout<<myCircularQueue.enQueue(4)<<endl; // return False
cout<<myCircularQueue.Rear()<<endl;     // return 3
cout<<myCircularQueue.isFull()<<endl;   // return True
cout<<myCircularQueue.deQueue()<<endl;  // return True
cout<<myCircularQueue.enQueue(4)<<endl; // return True
cout<<myCircularQueue.Rear()<<endl;     // return 4
}
