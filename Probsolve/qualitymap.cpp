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

return 0;
}



