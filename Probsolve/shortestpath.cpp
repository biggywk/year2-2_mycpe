#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <queue>
using namespace std;
#define INF 0x3f3f3f3f
#define pp pair<int,int>
int n,m;
vector< pair<int,int> >adj[200100];
priority_queue <int>q;
int deg[200100];
int d[200100];
void init()
{
    for(int i=0;i<n;i++)
    {
        deg[i]=0;
    }
}
void shortestpath(int s)
{
    priority_queue<pp,vector<pp>,greater<pp> >q;
    for(int i=0;i<n;i++)
    {
        d[i]=INF;
    }
    q.push(pp(0,d[s]));
    d[s]=0;
    while(!q.empty())
    {
        int u=q.top().first;
        q.pop();
        for(int i=0; i<deg[u]; i++)
        {
            int v=adj[u][i].first;
            int w=adj[u][i].second;
            if(d[v]>d[u]+w)
            {
                d[v]=d[u]+w;
                q.push(pp(v,d[v]));
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,w;
    cin>>n>>m;
    init();
    while(m--)
    {
        cin>>a>>b>>w;
        a--;b--;
        adj[a].push_back(make_pair(b,w));
        deg[a]++;
        adj[b].push_back(make_pair(a,w));
        deg[b]++;
    }
    shortestpath(0);
    cout<<d[n-1];

}
