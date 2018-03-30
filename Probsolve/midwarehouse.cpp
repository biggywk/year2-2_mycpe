#include<iostream>
#include<vector>
using namespace std;
#define zebra 100100
    vector<int> adj[zebra];
    int group[zebra];
    bool visited[zebra];
    int deg[zebra];
    int zzz;
    void dfs(int u)
    {

        visited[u]=true;
        group[u]=zzz;
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
    int n,m;
    cin>>n>>m;
    int k;
    cin>>k;

    for(int i=0;i<n;i++)
    {
        visited[i]=false;
    }
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;

    }
    for(int i=0;i<n;i++)
    {zzz=i;
        if(!visited[i])
            dfs(i);
    }
    int o;
    for(int i=0; i<k; i++)
    {

            cin>>o>>m;
            o--;
            m--;
            if(group[o]==group[m])
            {
                cout<<"1"<<endl;
            }
            else
                cout<<"0"<<endl;
    }


    return 0;
}



