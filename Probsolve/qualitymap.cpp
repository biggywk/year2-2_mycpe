#include <iostream>
using namespace std;
char adj[30][30];
int checka[30][30];
int checkb[30][30];
bool visited[30][30];
int n,m,i,j;
int c=0;
int d=0;
int count =0;
void dst(int a,int b)
{

    if(visited[a][b]==false&&adj[a][b]!='#')
    {
        if(adj[a][b]=='*')
        {
            checka[i][j]=1;
        }
        else if(adj[a][b]=='$')
        {
            checkb[i][j]=1;
        }
        count++;
        visited[a][b]=true;
        if(b+1<m&&visited[a][b+1]==false)
            dst(a,b+1);
        if(a+1<n&&visited[a+1][b]==false)
            dst(a+1,b);
        if(b-1>=0&&visited[a][b-1]==false)
            dst(a,b-1);
        if(a-1>=0&&visited[a-1][b]==false)
            dst(a-1,b);
    }
    visited[a][b]=true;
}
main()
{
    int answer[2];
    answer[0]=0;
    answer[1]=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>adj[i][j];
            visited[i][j]=false;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(visited[i][j]==false)
            {

                dst(i,j);
                if(checka[i][j] == 1 && checkb[i][j] ==1)
                {

                    answer[0] += count;
                    count =0;
                }
                else if( checka[i][j] == 1 || checkb[i][j]==1)
                {

                    answer[1] += count;
                    count =0;
                }
                else
                    count=0;
            }
        }
    }

    cout<<answer[0]<<" "<<answer[1];
}
