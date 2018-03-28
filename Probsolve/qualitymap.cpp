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

int value[][4] = {
    { 1, 1, 1, 1 },
    { 0, 0, 0, 0 },
};

int lookup[256];

int main()
{
    lookup['$'] = 0;
    lookup['*'] = 0;

    int n,m;
    cin>>n>>m;
    //vector<char> adj[n];
    int lv1[n+2][m+2]={};
    //int lv2[n+1][m+1]={0};
    char tmp;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>tmp;
            lv1[i][j - 1] = value[lookup[tmp]][0];
            lv1[i][j + 1] = value[lookup[tmp]][1];
            lv1[i - 1][j] = value[lookup[tmp]][2];
            lv1[i + 1][j] = value[lookup[tmp]][3];
        }
    }
        for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++)
        {
            cout<<lv1[i][j];
        }cout<<endl;
    }


return 0;
}



