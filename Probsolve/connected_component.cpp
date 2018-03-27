#include<iostream>
#include<vector>
using namespace std;
int n,m;
vector<int> adj[100010];
int deg[100010];
void read()
{

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
        //cout<<u+1<<endl;
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

    int c=0;
        cin>>n>>m;
    deg[100010]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;deg[v]++;
    }
    init();
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            c++;}
dfs(i);


    }
    if(m==1)
    {
        cout<<1;
    }
    else
    cout<<c;
return 0;
}



