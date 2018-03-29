#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;
vector<int> path[100010];
int n,m;
bool can(int p,int z)//row 3
{
    if(p==n-2)
    {
        return 1;
    }
    for(int i=0;i<path[p+1].size();i++)
    {
        if(path[p][z]==path[p+1][i])
        {
            return can(p+1,i);
        }
    }
    //go left
    int bo=1;
    while(z-bo!=-1)
    {
        if((path[p][z])-1==path[p][z-bo])
        {
            return can(p,z-bo);
        }bo++;
    }
    //go right
    bo=1;
    while(z+bo<path[p].size())
    {
        if((path[p][z])+1==path[p][z+bo])
        {
            return can(p,z+bo);
        }bo++;
    }
}
int main(){

    cin>>n>>m;
    char tmp;
    char arr[n][m];

    for(int j=0;j<n;j++)
    for(int i=0;i<m;i++)
        {
            cin>>tmp;
            arr[j][i]=tmp;
        }
        for(int i=0;i<n;i++){
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
    if(n<=2)
    {
        for(int i=0;i<path[0].size();i++)
        {

        }
    }
    else
    {
        for(int j=0;j<path[0].size();j++)//j=member
    {
        for(int z=0;z<path[1].size();z++)
        {
            if(path[0][j]==path[1][z])
            {
                if(can(1,z))
                {
                    cout<<"yes";
                    goto gg;
                }
                else
                {
                    cout<<"no";
                    goto gg;
                }
            }
        }

    }
    }
gg:
          /*  for(int i=0;i<cangox.size();i++){
cout<<cangox[i]<<" "<<cangoy[i]<<endl;
            }*/

    return 0;
}
