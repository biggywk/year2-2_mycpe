#include<iostream>
#include<vector>
#include<list>
using namespace std;
#define MAX 100010
vector<int> adj[MAX];
int visited[MAX];
list<int> q;
int tmp;
void bfs(int u)
{
      cout<<u+1<<endl;
    visited[u]=true;
    for(int i=0;i<adj[u].size();i++)
    {
        q.push_back(adj[u][i]);
        while(!q.empty())
        {
            tmp=q.front();
            q.pop_front();
            if(!visited[tmp])
            {
                bfs(tmp);
            }

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
    bfs(0);
return 0;
}
