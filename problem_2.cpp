#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue <int>q;
    int m;
    cin>>m;
     for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }

    //  while(!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    // while(!q.empty())
    // {
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }


    bool flag=true;
    if(st.size()==q.size())
    {
        
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                  flag=false;
                  break;
          
              
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
    }
    else
    {
        flag=1;
    }

     if(flag==true)
    {
         cout<<"YES"<<endl;
        
    }
    else
    {
       cout<<"NO"<<endl;
    }

    return 0;
}