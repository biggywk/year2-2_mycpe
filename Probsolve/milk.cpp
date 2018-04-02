#include<iostream>
#include<vector>
#include <list>
using namespace std;
    bool mixed;
    list<int> q;
    int node;
    int tmp;
    int b;
    vector<int> adj[100010];
    int visited[100010];
bool bfs(int u)
{

    visited[u]=true;
    if(visited[b])
        return true;
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
void revisited()
{
    for(int i=0;i<node;i++)
    {
        visited[i]=0;
    }
}
int main()
{
    int norder;
    char tmp;
    int a;
    //int b;
    cin>>node>>norder;
    int si;
    vector<int>::iterator it;

    for(int i=0; i<norder; i++)
    {
        cin>>tmp>>a>>b;
        a--;
        b--;
        it=adj[a].begin();
        if(tmp=='q')
        {
            revisited();
            mixed=bfs(a);
            if(mixed)
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else if(tmp=='c')
        {
            si=adj[a].size();
            for(int z=0;z<adj[b].size();z++)
            {
                adj[a].push_back(adj[b][z]);
            }
            for(int z=0;z<si;z++)
            {
                adj[b].push_back(adj[a][z]);
            }
        }
    }
        return 0;
    }
