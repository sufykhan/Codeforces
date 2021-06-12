#include <iostream>
#include <vector>
using namespace std;


class Queue{
    private:
        vector<int>data;
        int pointer;
    public:
        Queue(){
            pointer=0;
        }  
        bool enqueue(int x){
            data.push_back(x);
            return false;
        }
        bool isEmpty(){
            return pointer>=data.size();
        }
        bool dequeue(){
            if(isEmpty()){
                return false;
            }
            pointer++;
            return true;
        }
        int front(){
            return data[pointer];
        }

};

int main()
{
    Queue Test;
    Test.enqueue(8);
    Test.enqueue(5);
    Test.enqueue(3);
    cout<<Test.front();
    Test.dequeue();
    cout<<Test.front();
    Test.dequeue();
    cout<<Test.front();
    Test.dequeue();
    return 0;
}
