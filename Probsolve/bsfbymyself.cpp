#include<iostream>
#include<vector>
using namespace std;
#define MAX 100010
vector<int> adj[MAX];
int visited[MAX];
void dfs(int u)
{
    cout<<u+1<<endl;
    visited[u]=1;
    for(int i=0;i<adj[u].size();i++)
    {
        if(!visited[adj[u][i]])
        {
            dfs(adj[u][i]);
        }
    }

}
int main()
{
    for(int i=0;i<MAX;i++)
    {
        visited[i]=0;
    }
    int n_of_node,edge;
    cin>>n_of_node>>edge;
    int first,second;
    for(int i=0;i<edge;i++)
    {
        cin>>first>>second;
        first--;second--;
        adj[first].push_back(second);
        adj[second].push_back(first);
    }
    dfs(0);
return 0;
}
