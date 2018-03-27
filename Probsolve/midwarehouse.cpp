#include<iostream>
#include<list>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n];
    int tmp;
    int tmp1;
    list<int>node[n+1];
    list<int>::iterator it;
    list<int>::iterator it1;
    int can=0;
    for(int i=0;i<m;i++)
    {
        cin>>tmp>>tmp1;

        node[tmp].push_back(tmp1);
        node[tmp1].push_back(tmp);

    }

    for(int i=0;i<k;i++)
    { can=0;
        cin>>tmp>>tmp1;
        for(it=node[tmp].begin();it!=node[tmp].end();it++)
        {   cout<<*it<<endl;
            for(it1=node[(*it)].begin();it1!=node[(*it)].end();it1++)
            {cout<<*it1<<endl;
                   if(*it1==tmp1)
                   {
                        can=1;
                        goto z;
                   }
            }
        }
        z:
            cout<<can<<endl;
    }

return 0;}
