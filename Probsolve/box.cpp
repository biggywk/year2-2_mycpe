// task : bipartite
#include <iostream>
#include <vector>
#include <list>
using namespace std;
#define MAX_N 100100
vector <int> adj[MAX_N];
int deg[MAX_N];
bool visited[MAX_N];
int layer[MAX_N];
void read_input()
{
    int u,v;
    cin >> n >> m;
    for(int j=0; j<n; j++) {
        deg[j] = 0;
        //adj[j].clear;
    }
    for(int j=0;j<m;j++){
        cin >> u >> v; u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        deg[u]++;
        deg[v]++;
    }
}
bool bfs(int s)
{
    int color[n];
    for(int i=0; i<n; i++){
        visited[i] = false;
        layer[i] = -1;
        color[i]= -1;
        }
        layer[s] = 0;
        color[s] = 1;
        list<int> Q;
        Q.push_back(s);
        while(!Q.empty()){
            int u = Q.front();
            Q.pop_front();
            visited[u] = true;
            //cout << u+1<<","<<layer[u] <<endl;
            for(int d=0;d<deg[u];d++){
                int v = adj[u][d];
                if(layer[v]==-1 && color[v]==-1){
                    layer[v] = layer[u] +1;
                    if(color[u]==0)
                        color[v]=1;
                    else if(color[u]==1)
                        color[v]=0;
                    Q.push_back(v);
                }

            }
        }
        return true;
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
int main(){
    int n,m;
    cin>>n>>m;
    char tmp;
    vector<int>arr[n][m];
    for(int j=0;j<n;j++)
    for(int i=0;i<m;i++)
        {
            cin>>tmp;
        }
    return 0;
}
