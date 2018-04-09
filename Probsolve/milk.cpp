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
    int parent[100010];
int main()
{
    int norder;
    char tmp;
    int a;
    int asize,bsize;
    //int b;
    cin>>node>>norder;
    //int rank[node];
    vector<int> sub[node];
    for(int i=0; i<node;i++)
    {
        parent[i]=i;
        sub[i].push_back(i);
        //rank[i]=0;
    }
    for(int i=0; i<norder; i++)
    {
        cin>>tmp>>a>>b;
        a--;
        b--;
        if(tmp=='q')
        {
            cout<<parent[a]<<parent[b]<<endl;
            if(parent[a]==parent[b])
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else if(tmp=='c')
        {
            asize=sub[a].size();
            bsize=sub[b].size();
            //cout<<asize<<bsize<<endl;
            if(asize>=bsize)
            {
                for(int z=0;z<bsize;z++)
                {
                    //cout<<sub[b][z]<<endl;
                    sub[a].push_back(sub[b][z]);
                    sub[b].push_back(a);
                }
                bsize=sub[b].size();
                for(int z=0;z<bsize;z++)
                {
                    parent[sub[b][z]]=a;
                }
                for(int z=0;z<sub[a].size();z++)
                {
                    parent[sub[a][z]]=a;
                }
            }
            else
            {
                for(int z=0;z<asize;z++)
                {
                    //cout<<sub[a][z]<<endl;
                    sub[b].push_back(sub[b][z]);
                    sub[a].push_back(b);
                   // parent[sub[a][z]]=b;
                }
                asize=sub[a].size();
                for(int z=0;z<asize;z++)
                {
                    parent[sub[a][z]]=b;
                }
                for(int z=0;z<sub[b].size();z++)
                {
                    parent[sub[b][z]]=b;
                }
            }
        }
        //check sub
        for(int e=0;e<node;e++)
        {
            for(int k=0;k<sub[e].size();k++)
            {
                cout<<sub[e][k]<<endl;
            }
        }
    }
        return 0;
    }
