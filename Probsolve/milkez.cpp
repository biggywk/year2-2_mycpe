#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int n,q;
int arr[100010];
int find(int i)
{
   // cout<<arr[i]<<endl;
    while(arr[i]!=i)
    {
        arr[i]=arr[arr[i]];
        i=arr[i];
    //cout<<arr[i]<<endl;
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
    cin>>n>>q;
    int x,y;
    char tmp;

    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
        while(q--)
        {
            cin>>tmp>>x>>y;
            if(tmp=='c')
                Union(x,y);
            else if(tmp=='q')
            {
                if(find(x)==find(y))
                {
                    cout<<"yes"<<"\n";
                }
                else
                    cout<<"no"<<"\n";
            }
        }


    return 0;
}
