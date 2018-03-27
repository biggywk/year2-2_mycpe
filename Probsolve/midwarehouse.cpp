#include<iostream>
#include<vector>
using namespace std;

void dfs(int u)
{
    for(int i=0; i<v[u].size(); i++)
        dfs(v[u][i]);
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int tmp;
    int tmp1;
    vector<int> v[n];
    vector<int> arr[n];
    for(int i=0; i<m; i++)
    {
        cin>>tmp>>tmp1;
        v[tmp].push_back(tmp1);
        v[tmp1].push_back(tmp);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            arr[i].push_back(v[i][j]);
        }
    }



       return 0;
}
