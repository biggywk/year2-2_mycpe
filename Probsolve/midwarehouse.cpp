
#include<vector>
#include<stdio.h>
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
    scanf("%d %d",&n,&m);
    int k;
    scanf("%d",&k);
   // printf("%d%d%d",n,m,k);
    int i;
    int u,v;
    for( i=0;i<n;i++)
    {
        visited[i]=false;
    }
    for(i=0; i<m; i++)
    {

        scanf("%d %d",&u,&v);
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
    for( i=0;i<n;i++)
    {zzz=i;
        if(!visited[i])
            dfs(i);
    }
    int o;
    for(i=0; i<k; i++)
    {
            scanf("%d %d",&o,&m);
            o--;
            m--;
            if(group[o]==group[m])
            {
                printf("1\n");
            }
            else
                printf("0\n");
    }


    return 0;
}



