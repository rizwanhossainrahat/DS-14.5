#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    queue<int>q2;
    stack<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q2.push(s.top());
        s.pop();
    }

     while(!q2.empty())
    {
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}