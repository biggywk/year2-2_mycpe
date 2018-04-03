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
    a=*pos.begin();
    cout<<a;
    it=pos.begin();
    b=*++it;
    cout<<b;
    cout<<*it;
    return 0;
}
