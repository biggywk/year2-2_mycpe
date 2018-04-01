#include<stdio.h>
#include<stdint.h>
//+++++++++++++++1.++++++++++++++
void absolute(int n)
{
    int mask=n>>31;
    mask=(mask+n)^mask;
    printf("%d\n",mask);

}
//+++++++++++++++++++++++++++++++
int main()
{
	int32_t num;
	scanf("%d",&num);//input
	//absolute(num);
    printf("%d\n",0xabcd5678);
    printf("%d\n",0x56);
    return 0;
}
