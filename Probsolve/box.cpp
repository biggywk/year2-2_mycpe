#include <iostream>
#include <vector>
#include <list>
using namespace std;
int n,m;
int main(){

    cin>>n>>m;
    char tmp1;
    char arr[n][m];
    vector<int> path[n];
vector<int> go[n];
    for(int j=0;j<n;j++)
    for(int i=0;i<m;i++)
        {
            cin>>tmp1;
            arr[j][i]=tmp1;
        }
        for(int i=0;i<n-1;i++){

    for(int j=0;j<m;j++)
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
    int group;
    for(int i=0;i<n-1;i++)
    {
            group=1;
            go[i].push_back(group);
        for(int j=0;j<(path[i].size())-1;j++)
        {
                if(path[i][j]+1==path[i][j+1])
                {

                    go[i].push_back(group);
                }
                else
                {
                    group++;
                    go[i].push_back(group);
                }
        }
    }
    list<int>eiei;
    list<int>owow;
    int tmp;
 for(int j=0;j<go[0].size();j++)
            {
                eiei.push_back(path[0][j]);
            }
 for(int i=1;i<n-1;i++)
        {
                while(!eiei.empty())
                {
                    tmp=eiei.back();
                    eiei.pop_back();
                for(int j=0;j<go[i].size();j++)
            {
                if(tmp==path[i][j])
                {
                     group=go[i][j];
                    for(int l=0;l<go[i].size();l++)
                    {
                        if(go[i][l]==group)
                            owow.push_back(path[i][l]);
                    }
                }
            }
            }
        }
            while(!owow.empty())
            {
                tmp=owow.back();
                eiei.push_back(tmp);
                owow.pop_back();
            }
    if(eiei.empty())
    {
        cout<<"no";
    }
    else
        cout<<"yes";

    return 0;
}
