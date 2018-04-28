/*
Lang: C++
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr[100];
    n++;
    int tuatan=n;
    int x=1;
    for(int j=0;j<n;j++)
        {
            arr[0].push_back(0);
        }
    while(n>2)
    {
        n/=2;
         for(int j=0;j<n;j++)
        {
            arr[x].push_back(0);
        }
        n++;
        x++;
    }

    char order;
    int index;
    int value;
    int forbid=tuatan;
    forbid--;
    for(int i=0;i<q;i++)
    {
        cin>>order;
        if(order=='u'||'U')
        {
            cin>>index>>value;
            if(index<forbid)
            {
                arr[0][index]+=value;
                for(int z=0;z<x;z+=2)
                {
                    arr[1][z]+=arr[0][z]+arr[0][z+1];
                }
            }
        }

        else if(order=='q'||'Q')
        {
            cin>>index;
        }
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<(arr[i]).size();j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
        return 0;
    }
