/*
LANG: C++
*/
#include<iostream>
using namespace std;
int main(){
int Size_array,n;//round;
//cout<<"Enter Size : ";
cin>>Size_array;
//cout<<endl<<"Enter n of order : ";
cin>>n;
//cout<<endl<<"---  1 is plus ---"<<endl<<"--- 2 is ask ---"<<endl;
int tmp,index;
char order;
int arr[Size_array]={};
int k=Size_array;
while(n--)
{
    cin>>order>>index;
    if(order == 'u')
    {
        cin>>tmp;
        for(int i=index;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            arr[i]+=tmp;
        }
    }
    else if(order == 'q')
    {
                cout<<arr[index]<<endl;
    }
   /* for(int z=0;z<k;z++)
    {
        cout<<" "<<arr[z];
    }*/
}

return 0;
}
