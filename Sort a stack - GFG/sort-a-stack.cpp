// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(stack<int>&s,int t){
    
    if(s.empty() || (!s.empty() && s.top()<=t)){
        s.push(t);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,t);
    s.push(val);
}
void SortedStack :: sort()
{
   //Your code here
   if(s.size()==1){
       return;
   }
   int res=s.top();
   s.pop();
   sort();
   insert(s,res);
}