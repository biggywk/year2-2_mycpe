#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;

    int* array[n/2] ;
    char order;
    int index1,index2;
    int x=0;
    int value;
    vector<int> range;
    while(n>2)
    {
        range.push_back(n);
        n++;
        array[x] = new int[n];

        x++;
        n/=2;
    }
    array[x]=new int[1];
    cout<<x<<endl;
    for(int i=0;i<range.size();i++)
        cout<<range[i]<<endl;
        while(q--)
        {
            cin>>order;
            if(order=='u'||order=='U')
            {
                cin>>value>>index1;
                x=0;
                while(index1>0)
                {
                    array[x][index1]+=value;
                    index1++;
                    x++;
                    index1/=2;

                }


            }
            else if(order=='q'||order=='Q')
            {
                cin>>index1>>index2;

            }
        }
        return 0;
    }
