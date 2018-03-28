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
    int n,m;
    cin>>n>>m;
    //vector<char> adj[n];
    int lv1[n][m];
    char tmp;
        for(int j=0;j<m;j++)
        {
            cin>>tmp;
            if(tmp=='$')
            {
                lv1[0][j+1]=1;
                lv1[1][j-1]=1;
            }
            else if('#')
            {

            }
        }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>tmp;
            if(tmp=='$')
            {

            }
            else if('#')
            {

            }
        }
    }
return 0;
}



