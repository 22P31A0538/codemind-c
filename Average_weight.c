#include<stdio.h>
void k(int x,int y,int z)
{
	int a;
	a=(3*z)-x-y;
	printf("%d",a);
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	k(x,y,z);
}