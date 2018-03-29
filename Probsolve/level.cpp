#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int tmp,tmp1,tmp2;
    int codition[n-1][3];
    bool passed[n-1][3];
        for(int i=0;i<n-1;i++)
    {
       passed[i][0]=false;
       passed[i][1]=false;
       passed[i][2]=false;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>tmp>>tmp1>>tmp2;
        codition[i][0]=tmp;
        codition[i][1]=tmp1;
        codition[i][2]=tmp2;
    }
    int level=1;
    int state=0;
    for(int i=0;i<m;i++)
    {
        cin>>tmp>>tmp1>>tmp2;
        if(tmp>=codition[state][0])
        {
            passed[state][0]=true;;
        }
        if(tmp1>=codition[state][1])
        {
            passed[state][1]=true;;
        }
        if(tmp2>=codition[state][2])
        {
            passed[state][2]=true;;
        }
        if(passed[state][0]&&passed[state][1]&&passed[state][2])
        {
            state++;
            level++;
        }
    }
cout<<level;

    return 0;
}
