#include<iostream>
using namespace std;
bool visited[20][20];
int area[20][20];
int n,jump;
int mx;
void go(int a,int b)
{
    if(!visited[a][b])
    {

        visited[a][b]=true;
        if(area[a][b]+jump>=area[a][b+1])
        {
            if(b<n)
                go(a,b+1);
        }
        if(area[a][b]+jump>=area[a+1][b])
        {
            if(a<n)
                go(a+1,b);
        }
        if(area[a][b]+jump>=area[a][b-1])
        {
            if(b-1>=0)
                go(a,b-1);
        }
        if(area[a][b]+jump>=area[a-1][b])
        {
            if(a-1>=0)
                go(a-1,b);
        }

    }
}
int main()
{
    cin>>n>>jump;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>area[i][j];
    }


        go(0,0);

    if(visited[n-1][n-1]==true)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}
