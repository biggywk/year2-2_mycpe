/*
LANG: C++
*/
#include<iostream>
#include<vector>
using namespace std;
int cnt=0;
void div(int arr[],int hl)
{
    int z=h1/2
    if(hl!=1)
    {

    }
}
int main()
{
    int n;
    cin>>n;
    int j;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int hl=n/2;
    int hr=n-n/2;
    if(n/2>1)
    {
        divide(arr,hl);
    }
    int z=hl;
    int last=n-1;
    int x=hr;
    div(arr,hl);
    while(z>0&&last>hl+1)
    {
        if(arr[z]>arr[last])
        {
            cnt++;
            last--;
        }
        else
        {
            z--;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
