// task : mid59_droids
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int robot,thing;
    cin>>robot>>thing;
    set<int>pos;
    int tmp;
    int mn=0;
    int distance=0;
    set<int>::iterator it;
    set<int>::iterator it1;
    int eandb;
    for(int i=0; i<robot; i++)
    {
        cin>>tmp;
        pos.insert(tmp);
    }
    int a,b;

    cin>>tmp;
    it=pos.lower_bound(tmp);
    it1=it--;
    if(it==pos.end())
    {
        eandb=*it1;
        mn=tmp-*it1;
        pos.erase(eandb);
    }
    else if (tmp-*it1<=*it-tmp)
    {
        eandb=*it1;
        mn=tmp-*it1;
        pos.erase(eandb);

    }
    else
    {
        eandb=*it;
        mn=*it-tmp;
        pos.erase(eandb);

    }
    distance+=mn;



    while(--thing)
    {

    }
    cout<<distance;
    return 0;
}
