#include <iostream>
#include <vector>
#include <list>
using namespace std;
    int n,m;
    bool visited[100010];
    vector<int>go[100010];
    string ans="no";
void dfs(int u)
{
   // cout<<u<<endl;
    if(u>=(n-2)*m)
    {
        ans="yes";
    }

    visited[u]=1;
    for(int i=0;i<go[u].size();i++)
    {
        if(!visited[go[u][i]])
        {
            dfs(go[u][i]);
        }
    }

}
int main()
{

    cin>>n>>m;
    char tmp1;
    char arr[n][m];
    vector<int>pathx[n];


    for(int i=0;i<n*m;i++)
    {
        visited[i]=false;
    }
    for(int to=0; to<n; to++)
        for(int so=0; so<m; so++)
        {
            cin>>tmp1;
            arr[to][so]=tmp1;
        }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            if(arr[i][j]=='.')
            {
                if(arr[i][j+1]=='.'&&arr[i+1][j]=='.'&&arr[i+1][j+1]=='.')
                {
                    pathx[i].push_back(i*m+j);
                }
            }

        }
    }
    //1 =row*i+col,3=2+2-1
        for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<pathx[i].size(); j++)
        {
        if(pathx[i][j]+1==pathx[i][j+1])
        {
            go[(pathx[i][j])].push_back(pathx[i][j+1]);
            go[pathx[i][j+1]].push_back(pathx[i][j]);
        }
        for(int z=0;z<pathx[i+1].size();z++)
        {
            if(pathx[i][j]+m==pathx[i+1][z])
            {
                go[(pathx[i][j])].push_back(pathx[i+1][z]);
            go[pathx[i+1][z]].push_back(pathx[i][j]);
            }
        }
    }
    }
           /* for(int i=0; i<n*m; i++)
    {
        for(int j=0; j<go[i].size(); j++)
        {
            cout<<go[i][j]<<" ";
        }cout<<endl;
    }*/
    for(int i=0;i<pathx[0].size();i++)
    {
        dfs(pathx[0][i]);
    }
    cout<<ans<<endl;

    return 0;
}
