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
    vector<int>adjx[n-1];
    vector<int>adjy[m-1];
    vector<int>path[n-1];
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
                    path[i].push_back(j);
                }
            }
        }
    }
        for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            if((path[i][j])+1==path[i][j++])
            {
                adjx[i].push_back(path[i][j]);
            }
        }
    }
            for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<adjx[i].size(); j++)
        {
            cout<<path[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
