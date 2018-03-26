#include<cstdio>
#include<map>
using namespace std;
int main(){
   map<int,int>post;
   int n;
   scanf("%d",&n);
   int status;
   int mx=0;
   int tmp;
   while(n--)
         {
            scanf("%d",&status);
            post[status]++;
            if(post[status]>=mx)
            {
                mx=post[status];
                tmp= status;
            }
            printf("%d\n",tmp);
         }
return 0;}
