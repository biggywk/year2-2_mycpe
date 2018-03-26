#include<iostream>
using namespace std;
int main()
{
    int nofplanet;
    int x,y,r;
    cin>>nofplanet>>x>>y>>r;
    int ans;
    int a;
        if(y<0)
        {
            a=(y+r)*-1;
            if(r>=y*-1)
                a=-1;
        }
        else if(y==0)
        {
            a=-1;
        }
        else if(y>0)
        {
            a=y-r;
            if(r>=y)
                a=-1;
        }
        ans=a;
    for(int i=1; i<nofplanet; i++)
    {
        cin>>x>>y>>r;
        if(y<0)
        {
            a=(y+r)*-1;
            if(r>=y*-1)
                a=-1;
        }
        else if(y==0)
        {
            a=-1;
        }
        else if(y>0)
        {
            a=y-r;
            if(r>=y)
                a=-1;
        }
        if(a<ans)
        {
            ans=a;
        }
    }
    cout<<ans;
    return 0;
}
