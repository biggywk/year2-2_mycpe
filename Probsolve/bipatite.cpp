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
    int k;
    cin>>k;
    deg[100010]={0};
    int c=0;
    bool bip;
    while(k--)
    {bip=false;
cin>>n>>m;
    init();
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;deg[v]++;
    }
    for(int i=0;i<m;i++)
    {
        if(deg[i]%2!=0)
        {
            bip=true;
            break;
        }
    }
    if(bip)
        cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    for(int i=0;i<m;i++)
        adj[i].clear();}
return 0;
}



