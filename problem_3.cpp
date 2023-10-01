#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    stack<int>s2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();

    }
    
    while(!s2.empty())
    {
        cout<<s2.top()<<" ";
        s2.pop();
    }
    return 0;
}