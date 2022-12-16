#include<stdio.h>
void k(int x,int y,int z)
{
    int n;
    n=(z-y)/x;
    printf("%d",n);
}
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	k(x,y,z);
}