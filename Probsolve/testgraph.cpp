#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> adj[100010];
int deg[100010];
void read()
{
    cin>>n>>m;
    deg[100010]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;u--;v--;
        adj[u].push_back(v);
        deg[u]++;

    }
}
    bool visited[100010];
    void init()
    {
        for(int i=0;i<n;i++)
        {
            visited[i]=false;
        }
    }
    void dfs(int u)
    {
        visited[u]=true;
        cout<<u+1<<endl;
        for(int d=0;d<deg[u];d++)
        {
            int v=adj[u][d];
            if(!visited[v])
            {
                dfs(v);
            }
        }
    }

int main()
{
    read();
    init();
    dfs(0);
return 0;
}



