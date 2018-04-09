#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int arr[200100];
int n,m;
pair<int, pair<int,int> >graph[200100];
int find(int i)
{
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
void Union(int x,int y)
{
    int a=find(x);
    int b=find(y);
    if(a<b)
    {
        arr[b]=arr[a];
    }
    else
        arr[a]=arr[b];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans=0;
    cin>>n>>m;
    for(int i=1; i<n+1; i++)
    {
        arr[i]=i;
    }
    for(int i=0;i<m;i++)
    {
        cin>>graph[i].second.first>>graph[i].second.second>>graph[i].first;
    }
    sort(graph,graph+m);
    for(int i=0;i<m;i++)
    {

        if(find(graph[i].second.first)!= find(graph[i].second.second))
        {
            Union(graph[i].second.first,graph[i].second.second);
            ans+=graph[i].first;
        }
    }
    cout<<ans;
    return 0;
}
