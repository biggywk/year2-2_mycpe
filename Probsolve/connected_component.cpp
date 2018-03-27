#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int node,order;
    cin>>node>>order;
    int tmp,tmp1;
    vector<int> v[node];
    bool visited[node]={0};
    while(order--)
    {
        cin>>tmp1>>tmp;
        v[tmp1].push_back(tmp);
        v[tmp].push_back(tmp1);
    }
    for(int j=0;j<node;j++)
    for(int i=0; i<v[node].size();i++)
    {

    }



return 0;
}
