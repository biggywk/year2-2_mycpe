#include<iostream>
#include<string.h>
using namespace std;
int main(){
int nofstate;
int nround;
int state,time;
cin>>nofstate>>nround;
int besttime[nofstate];
int sum=0;
for(int i=0;i<nofstate;i++)
{
    besttime[i]=500;
}
for(int i=0;i<nround;i++)
{
    cin>>state>>time;
    if(besttime[state-1]>time)
        besttime[state-1]=time;
}
for(int i=0;i<nofstate;i++)
{
    sum+=besttime[i];
}
cout<<sum<<endl;
for(int i=0;i<nofstate;i++)
{
    cout<<i+1<<" "<<besttime[i]<<endl;
}



return 0;}
