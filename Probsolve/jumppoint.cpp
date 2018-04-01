#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
pair<int,int> adj[1010];
int n,r,d;
int layer[1010];
bool visited[1010];
int bft(int s)
{
    queue<int>Q;
    for(int i=0;i<=n+1;i++)
    {
        visited[i]=false;
        layer[i]=-1;
    }
    layer[s]=0;
    Q.push(s);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        visited[u]=true;
        for(int j=1;j<=n+1;j++)
        {
            d=pow(adj[j].first-adj[u].first,2)+pow(adj[j].second-adj[u].second,2);;
            if(r*r>=d&&d>0&&layer[j]==-1)
            {
                Q.push(j);
                layer[j]=layer[u]+1;
                if(j==n+1)
                    return layer[j];
            }
        }
    }
    return 0;
}
int main()
{
    cin>>n>>r;
    for(int i=1;i<=n;i++)
    {
        cin>>adj[i].first>>adj[i].second;
    }
    adj[0].first=0;
    adj[0].second=0;
    adj[n+1].first=100;
    adj[n+1].second=100;
    int x=bft(0);
    if(x==0)
        cout<<"-1";
    else
        cout<<x;
    return 0;
}
