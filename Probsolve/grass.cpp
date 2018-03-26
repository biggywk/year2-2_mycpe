#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int field=row*row;
    int norder;
    cin>>norder;
    char infield[field];
    char torder;
    int ow;
    for(int i=0;i<field;i++)
    {
        cin>>infield[i];
    }
    for(int i=0;i<norder;i++)
    {
        cin>>torder>>ow;
        if(torder=='L')
        {
           for(int j=(ow-1)*row;j<ow*row;j++)
           {
               if(infield[j]=='x')
               {
                   infield[j]='.';
               }
               else if(infield[j]=='#')
               {
                   j=field;
               }
                else if(infield[j]=='.')
               {
                   j=field;
               }
           }
        }
        else if(torder=='R')
        {
           for(int j=(ow*row)-1;j>=(ow-1)*row;j--)
           {
               if(infield[j]=='x')
               {
                   infield[j]='.';
               }
               else if(infield[j]=='#')
               {
                   j=(ow-1)*row;
               }
               else if(infield[j]=='.')
               {
                   j=(ow-1)*row;
               }
            }
        }
        else if(torder=='U')
        {
            for(int j=ow-1;j<field;j+=row)

            if(infield[j]=='x')
               {
                   infield[j]='.';
               }
               else if(infield[j]=='#')
               {
                   j=field;
               }
               else if(infield[j]=='.')
               {
                   j=field;
               }

        }
        else if(torder=='D')
        {
            for(int j=field-1-row+ow;j>=0;j-=row)

            if(infield[j]=='x')
               {
                   infield[j]='.';
               }
               else if(infield[j]=='#')
               {
                   j=-1;
               }
               else if(infield[j]=='.')
               {
                   j=-1;
               }

        }
        else if(torder=='A')
        {
               for(int j=(ow-1)*row;j<row*ow;j++)
           {
               if(infield[j]=='.')
               {
                   infield[j]='x';
               }
           }
        }
        else if(torder=='B')
        {
            for(int j=ow-1;j<field;j+=row)
            {
            if(infield[j]=='.')
               {
                   infield[j]='x';
               }

            }
        }

    }
        for(int i=0;i<field;i++)
    {
                if(i%row==0)
            cout<<endl;
        cout<<infield[i];
    }

return 0;}
