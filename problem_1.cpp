#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0)return true;
        else return false;
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        st2.push(y);
    }

    int flag=0;
    
    if(st1.size()==st2.size())
    {
        while(!st1.empty() && !st2.empty())
        {
            if(st1.top()!=st2.top())
            {
                flag=1;
                break;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }
    }
    else
    {
        flag=1;
    }
    
    if(flag==0)
    {
         cout<<"YES"<<endl;
        
    }
    else
    {
       cout<<"NO"<<endl;
    }

    // while(!st1.empty())
    // {
    //     cout<<st1.top()<<endl;
    //     st1.pop();
    // }
    // while(!st2.empty())
    // {
    //     cout<<st2.top()<<endl;
    //     st2.pop();
    // }

    return 0;
}