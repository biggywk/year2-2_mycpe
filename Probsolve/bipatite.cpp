#include <iostream>
#include <vector>
#include <list>
using namespace std;
#define MAX_N 100100
vector <int> adj[MAX_N];
int deg[MAX_N];
int n,m;
bool visited[MAX_N];
int layer[MAX_N];
void read_input()
{
    int u,v;
    cin>>n>>m;
    for(int j=0;j<n;j++)
    {
        deg[j]=0;
    }
    for(int j=0;j<m;j++)
    {
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
}
int bfs(int s)
{
    int color[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=false;
        layer[i]=-1;
        color[i]=-1;
    }
    layer[s]=0;
    color[s]=1;
    list<int>q;
    q.push_back(s);
    while(!q.empty())
    {
        int u=q.front();
        q.pop_front();
        visited[u]=true;
        for(int d=0;d<deg[u];d++)
        {
            int v=adj[u][d];
            if(layer[v]==-1&&color[v]==-1)
            {
                layer[v]=layer[u] +1;
                if(color[u]==0)
                    color[v]=1;
                else if(color[u]==1)
                    color[v]=0;
                q.push_back(v);
            }
            else if(color[v]==color[u])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{

        read_input();
        int question;
        cin>>question;
        while(question--)
        {
        if(bfs(0))
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;

        }
    return 0;
}
