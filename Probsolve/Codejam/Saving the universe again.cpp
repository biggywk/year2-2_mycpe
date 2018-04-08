//Saving The Universe Again
//Lang : c++
//Wachirawit Kaewlomsup
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
int time;
int damaged;
int shield;
int mindamaged;
string p;
int swaptime;
vector<int>positionofS;
scanf("%d",&time);
int totald;
time++;
int canminus2;
for(int cased=1;cased<time;cased++)
{
    canminus2=0;
    totald=0;
    mindamaged=0;
    damaged=1;
    swaptime=0;

    cin>>shield>>p;
    for(int i=0;i<p.length();i++)
    {
        if(p[i]=='C')
        {
            damaged*=2;
        }
        else if(p[i]=='S')
        {
            totald+=damaged;
            mindamaged++;
            positionofS.push_back(i);
        }
    }
     if(mindamaged>shield)
    {
        printf("Case #%d: IMPOSSIBLE\n",cased);
        //cout<<"Case #"<<cased<<": IMPOSSIBLE"<<endl;
    }
    else if(totald>=shield)
    {
        for(int o=0;o<positionofS.size();o++)
        {
              if(positionofS[o]==0)
            {
                canminus2+=(positionofS[o]-o);
            }
            else
                canminus2+=(positionofS[o]-o-1);
                }
        if(canminus2*2>totald-shield)
        {
            printf("Case #%d: %d\n",cased,(totald-shield+1)/2);
            //cout<<"Case #"<<cased<<": "<<(totald-shield+1)/2<<endl;
        }
        else
        {
            printf("Case #%d: %d\n",cased,totald-shield-canminus2);
            //cout<<"Case #"<<cased<<": "<<totald-shield-canminus2<<endl;
        }
    }
    else
    {
        printf("Case #%d: 0\n",cased);
        //cout<<"Case #"<<cased<<": 0"<<endl;
    }
    positionofS.clear();
}
return 0;
}
