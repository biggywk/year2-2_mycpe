#include<iostream>
using namespace std;
int main()
{   int a;
    int b=1;
    int ck=0;
    cin>>a;
    cin>>b;
    while(b)
    {
        ck++;
        cin>>b;
    }
    if((a-ck)%2==0)
    {
        cout<<"K";
    }
    else
    {
        cout<<"C";
    }
return 0;}
