#include <iostream>
#include <vector>
#include <list>
using namespace std;
int main()
{
    unsigned int n,m;
    cin>>n>>m;
    char tmp1;
    char arr[n][m];
    vector<int> adj[n];
    for(int to=0; to<n; to++)
        for(int so=0; so<m; so++)
        {
            cin>>tmp1;
            arr[to][so]=tmp1;
        }
     for(int to=0; to<n-1; to++)
        for(int so=0; so<m; so++)
        {
            if(arr[to][so]=='.')
            {
                if(arr[to][so+1]=='.'&&arr[to][so+1]=='.'&&arr[to+1][so+1]=='.'&&arr[to+1][so]=='.')
                {
                    adj[to].push_back(so);
                }
            }
        }
        /*
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<adj[i].size();j++)
            {
                cout<<i<<adj[i][j]<<" ";
            }cout<<endl;
        }*/
for(int i=0;i<n-1;i++)
{

}


    return 0;
}
