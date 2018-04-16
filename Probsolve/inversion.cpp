#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long long int i;
    cin>>n>>i;
    long long int j;
    long long int cnt=0;
    while(--n)
    {
        cin>>j;

        if(i<j)
            cnt++;

        i=j;
    }
    cout<<cnt;
return 0;
}
