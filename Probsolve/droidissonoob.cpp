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
    int eandb;
    for(int i=0; i<robot; i++)
    {
        cin>>tmp;
        pos.insert(tmp);
    }
    int a,b;

    cin>>tmp;
    it=pos.lower_bound(tmp);
        if(it==pos.end())
        {
            //cout<<"case 1 ";
            it--;
            mn=tmp-*it;
            eandb=*it;
        }
        else if(*it-tmp>tmp-*(--it))
        {
            //cout<<"case 2 ";
            mn=tmp-*++it;
             eandb=*it;
        }
        else
        {
            //cout<<"case 3 ";
            mn=tmp-*it;
             eandb=*it;
        }
    distance+=mn;
    //cout<<"distance "<<distance<<endl;
    pos.erase(it);
    while(--thing)
    {
        cin>>tmp;
        it=pos.lower_bound(tmp);
        if(it==pos.end())
        {
           // cout<<"case 1 ";
            it--;
            mn=tmp-*it;
            //eandb=*it;
        }
        else if(*it-tmp>tmp-*(--it))
        {
            //cout<<"case 2 ";
            mn=tmp-*++it;
            // eandb=*it;
        }
        else
        {
          //  cout<<"case 3 ";
            mn=tmp-*it;
            // eandb=*it;
        }
        pos.insert(eandb);
        eandb=*it;
        pos.erase(it);
        distance+=mn;
      //  cout<<"distance "<<distance<<endl;
    }
    cout<<distance;
    return 0;
}
