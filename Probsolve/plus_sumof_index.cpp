#include<iostream>
using namespace std;
int main(){
int Size_array,n;//round;
cout<<"Enter Size : ";
cin>>Size_array;
cout<<endl<<"Enter n of order : ";
cin>>n;
cout<<endl<<"---  1 is plus ---"<<endl<<"--- 2 is ask ---"<<endl;
int tmp,order,index;
int arr[Size_array]={};
while(n--)
{
    cin>>order>>index;
    if(order == 1)
    {
        cin>>tmp;
        for(int i=index;i<sizeof(arr)/sizeof(arr[0]);i++)
        {
            arr[i]+=tmp;
        }
    }
    else if(order == 2)
    {
        if(index==0)
            cout<<arr[index]<<endl;
            else
                cout<<arr[index]-arr[index-1]<<endl;    }
}

return 0;
}
