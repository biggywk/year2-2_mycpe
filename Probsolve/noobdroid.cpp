#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int robot,thing;
    cin>>robot>>thing;
    int posrobot[robot];
    int tmp;
    int mn;
    int willbenotbusy=30000;
    int distance=0;
    int j;

    for(int i=0; i<robot; i++)
    {
        cin>>posrobot[i];
    }
    mn=2000001;
        cin>>tmp;
        for( j=0; j<robot; j++)
        {
                if(abs(posrobot[j]-tmp)<mn)
                {
                    mn=abs(posrobot[j]-tmp);
                    willbenotbusy=j;
                 //   cout<<"min "<<j<<" "<<mn<<endl;
                }
        }
        distance+=mn;
int z;
    for(int i=1; i<thing; i++)
    {
        mn=2000001;
        cin>>tmp;
        for( j=0; j<robot; j++)
        {
            if(j!=willbenotbusy)
            {
                if(abs(posrobot[j]-tmp)<mn)
                {
                    mn=abs(posrobot[j]-tmp);
                    z=j;
                  //  cout<<"min "<<j<<" "<<mn<<endl;
                }
            }
        }
        distance+=mn;
        willbenotbusy=z;

    }
    cout<<distance;

    return 0;
}
