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
        pos.erase(it1);
    }
    else if (tmp-*it1<=*it-tmp)
    {
        eandb=*it1;
        mn=tmp-*it1;
        pos.erase(it1);

    }
    else
    {
        eandb=*it;
        mn=*it-tmp;
        pos.erase(it);

    }
    distance+=mn;



    while(--thing)
    {
        cin>>tmp;
        it=pos.lower_bound(tmp);
        it1=it--;
        if(it==pos.end())
        {
            pos.insert(eandb);
            eandb=*it1;
            mn=tmp-*it1;
            distance+=mn;
            pos.erase(it1);
        }
        else if (tmp-*it1<=*it-tmp)
        {
             pos.insert(eandb);
            eandb=*it1;
            mn=tmp-*it1;
            distance+=mn;
            pos.erase(it1);
        }
        else
        {
             pos.insert(eandb);
            eandb=*it;
            mn=*it-tmp;
            distance+=mn;
            pos.erase(it);
        }
        distance+=mn;
        //  cout<<"distance "<<distance<<endl;
    }
    cout<<distance;
    return 0;
}
