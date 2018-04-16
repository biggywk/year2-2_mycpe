#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
   int arr[] = {2, 3, 4, 5, 7};
   int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sizeof(arr)<<" "<<sizeof(arr[0])<<endl;
   printf("n is %d", n);
   return 0;
}
