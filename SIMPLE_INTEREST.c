#include<stdio.h>
void k(int p,int t,int r)
{
    int s;
    s=p*t*r/100;
    printf("%d",s);
}
int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    k(p,t,r);
}
