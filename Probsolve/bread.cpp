#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>bread[n][3];

    int tmp,tmp1,tmp2;
    for(int i=0;i<n;i++)
    {
        cin>>tmp>>tmp1>>tmp2;
        bread[i].pushback(tmp);
        bread[i].pushback(tmp);
        bread[i].pushback(tmp);
    }
    for(int i=0;i<m;i++)
    {
        cin>>tmp;
    }
    return 0;
}
